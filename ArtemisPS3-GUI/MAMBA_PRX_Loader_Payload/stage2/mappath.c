#include <lv2/lv2.h>
#include <lv2/libc.h>
#include <lv2/memory.h>
#include <lv2/patch.h>
#include <lv2/syscall.h>
#include <lv2/io.h>
#include <lv2/error.h>
#include "common.h"
#include "mappath.h"
#include "modulespatch.h"
#include "syscall8.h"

#define MAX_TABLE_ENTRIES 16

typedef struct _MapEntry
{
	char *oldpath;
	char *newpath;
	int  newpath_len;
	uint32_t flags;
} MapEntry;

MapEntry map_table[MAX_TABLE_ENTRIES];

// TODO: map_path and open_path_hook should be mutexed...

int map_path(char *oldpath, char *newpath, uint32_t flags)
{
	int i, firstfree = -1;

	if (!oldpath || strlen(oldpath) == 0)return -1;

		#ifdef DEBUG
		DPRINTF("Map path: %s -> %s\n", oldpath, newpath);
		#endif

	if (newpath && strcmp(oldpath, newpath) == 0) newpath = NULL;

	if (strcmp(oldpath, "/dev_bdvd") == 0) condition_apphome = (newpath != NULL);

	for (i = 0; i < MAX_TABLE_ENTRIES; i++)
	{
		if (map_table[i].oldpath)
		{
			if (strcmp(oldpath, map_table[i].oldpath) == 0)
			{
				if (newpath && strlen(newpath))
				{
					strncpy(map_table[i].newpath, newpath, MAX_PATH-1);
					map_table[i].newpath[MAX_PATH-1] = 0;
					map_table[i].newpath_len = strlen(newpath);
					map_table[i].flags = (map_table[i].flags&FLAG_COPY) | (flags&(~FLAG_COPY));
				}
				else
				{
					if (map_table[i].flags & FLAG_COPY) dealloc(map_table[i].oldpath, 0x27);

					dealloc(map_table[i].newpath, 0x27);
					map_table[i].oldpath = NULL;
					map_table[i].newpath = NULL;
					map_table[i].flags = 0;
				}

				break;
			}
		}
		else if (firstfree < 0) firstfree = i;
	}

	if (i == MAX_TABLE_ENTRIES)
	{
		if (firstfree < 0) return EKRESOURCE;

		if (!newpath || strlen(newpath) == 0) return 0;

		map_table[firstfree].flags = flags;

		if (flags & FLAG_COPY)
		{
			int len = strlen(oldpath);
			map_table[firstfree].oldpath = alloc(len+1, 0x27);
			strncpy(map_table[firstfree].oldpath, oldpath, len);
			map_table[firstfree].oldpath[len] = 0;
		}
		else map_table[firstfree].oldpath = oldpath;

		map_table[firstfree].newpath = alloc(MAX_PATH, 0x27);
		strncpy(map_table[firstfree].newpath, newpath, MAX_PATH-1);
		map_table[firstfree].newpath[MAX_PATH-1] = 0;
		map_table[firstfree].newpath_len = strlen(newpath);
	}

	return 0;
}

int map_path_user(char *oldpath, char *newpath, uint32_t flags)
{
	char *oldp, *newp;

	#ifdef DEBUG
	DPRINTF("map_path_user, called by process %s: %s -> %s\n", get_process_name(get_current_process_critical()), oldpath, newpath);
	#endif
	
	if (oldpath == 0) return -1;

	int ret = pathdup_from_user(get_secure_user_ptr(oldpath), &oldp);
	if (ret != 0) return ret;

	if (newpath == 0) newp = NULL;
	else
	{
		ret = pathdup_from_user(get_secure_user_ptr(newpath), &newp);
		if (ret != 0)
		{
			dealloc(oldp, 0x27);
			return ret;
		}
	}

	ret = map_path(oldp, newp, flags | FLAG_COPY);

	dealloc(oldp, 0x27);
	if (newp) dealloc(newp, 0x27);

	return ret;
}

LV2_SYSCALL2(int, sys_map_path, (char *oldpath, char *newpath))
{
	extend_kstack(0);
	return map_path_user(oldpath, newpath, 0);
}

int sys_map_paths(char *paths[], char *new_paths[], unsigned int num)
{
	uint32_t *u_paths = (uint32_t *)get_secure_user_ptr(paths);
	uint32_t *u_new_paths = (uint32_t *)get_secure_user_ptr(new_paths);
	int unmap = 0;
	int ret = 0;

	if (!u_paths)
	{
		unmap = 1;
	}
	else
	{
		if (!u_new_paths)
			return EINVAL;

		for (unsigned int i = 0; i < num; i++)
		{
			ret = map_path_user((char *)(uint64_t)u_paths[i], (char *)(uint64_t)u_new_paths[i], FLAG_TABLE);
			if (ret != 0)
			{
				unmap = 1;
				break;
			}
		}
	}

	if (unmap)
	{
		for (int i = 0; i < MAX_TABLE_ENTRIES; i++)
		{
			if (map_table[i].flags & FLAG_TABLE)
			{
				if (map_table[i].flags & FLAG_COPY)
					dealloc(map_table[i].oldpath, 0x27);

				dealloc(map_table[i].newpath, 0x27);
				map_table[i].oldpath = NULL;
				map_table[i].newpath = NULL;
				map_table[i].flags = 0;
			}
		}
	}

	return ret;
}

LV2_HOOKED_FUNCTION_POSTCALL_2(void, open_path_hook, (char *path0, int mode))
{
	if (path0[0]=='/')
	{
        char *path=path0;
        if(path[1]=='/') path++; //if(path[1]=='/') path++;
        if (path && (strcmp(path, "/dev_bdvd/PS3_UPDATE/PS3UPDAT.PUP") == 0))
        {    
            char not_update[40];
            sprintf(not_update, "/dev_bdvd/PS3_NOT_UPDATE/PS3UPDAT.PUP");
            set_patched_func_param(1, (uint64_t)not_update);
			#ifdef  DEBUG
			DPRINTF("Update from disc blocked!\n");
			#endif 
        }
		else
		//if(path[7]=='v' || path[7]=='m')
		{
			#ifdef DEBUG
			//DPRINTF("?: [%s]\n", path);
			#endif
			//if(path[1]=='/') DPRINTF("!!! This will usually error out!\n");//path++;
			//if(path[0]=='/')
			for (int i = MAX_TABLE_ENTRIES-1; i >= 0; i--)
			{
				if (map_table[i].oldpath)
				{
					int len = strlen(map_table[i].oldpath);
			
					if (path && strncmp(path, map_table[i].oldpath, len) == 0)
					{
						strcpy(map_table[i].newpath+map_table[i].newpath_len, path+len);
						set_patched_func_param(1, (uint64_t)map_table[i].newpath);
						
						#ifdef DEBUG
						//DPRINTF("=: [%s]\n", map_table[i].newpath);
						#endif
						break;
					}
				}
			}
		}
		
		#ifdef DEBUG
		DPRINTF("open_path %s\n", path);
		#endif
	}
}

int sys_aio_copy_root(char *src, char *dst)
{
	int len;

	src = get_secure_user_ptr(src);
	dst = get_secure_user_ptr(dst);

	// Begin original function implementation
	if (!src)
		return EFAULT;

	len = strlen(src);

	if (len >= 0x420 || len <= 1 || src[0] != '/')
		return EINVAL;

	strcpy(dst, src);

	for (int i = 1; i < len; i++)
	{
		if (dst[i] == 0)
			break;

		if (dst[i] == '/')
		{
			dst[i] = 0;
			break;
		}
	}


	if (strlen(dst) >= 0x20)
		return EINVAL;

	// Here begins custom part of the implementation
	if (strcmp(dst, "/dev_bdvd") == 0 && condition_apphome) // if dev_bdvd and jb game mounted
	{
		// find /dev_bdvd
		for (int i = 0; i < MAX_TABLE_ENTRIES; i++)
		{
			if (map_table[i].oldpath && strcmp(map_table[i].oldpath, "/dev_bdvd") == 0)
			{
				for (int j = 1; j < map_table[i].newpath_len; j++)
				{
					dst[j] = map_table[i].newpath[j];

					if (dst[j] == 0) break;

					if (dst[j] == '/')
					{
						dst[j] = 0;
						break;
					}
				}

				#ifdef DEBUG
				DPRINTF("AIO: root replaced by %s\n", dst);
				#endif
				break;
			}
		}
	}

	return 0;
}

void map_path_patches(int syscall)
{
	hook_function_with_postcall(open_path_symbol, open_path_hook, 2);

	if (syscall) create_syscall2(SYS_MAP_PATH, sys_map_path);
}


#ifdef PS3M_API
void unhook_all_map_path(void)
{
	suspend_intr();
	unhook_function_with_postcall(open_path_symbol, open_path_hook, 2);
	resume_intr();
}
#endif

