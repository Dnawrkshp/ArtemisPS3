#include <sys/memory.h>

#include "mem.h"
#include "inc/vsh_exports.h"


static sys_memory_container_t mc_app = (sys_memory_container_t)-1;
static sys_addr_t heap_mem = 0;
static uint32_t prx_heap = 0;



/***********************************************************************
* return heap pointer
***********************************************************************/
uint32_t get_heap(void)
{
	return prx_heap;
}

/***********************************************************************
* create prx heap from memory container 0("game")
***********************************************************************/
/* void create_heap(int32_t size)
{
  mc_app = vsh_memory_container_by_id(0);
  sys_memory_allocate_from_container(KB(size * 64), mc_app, SYS_MEMORY_PAGE_SIZE_64K, &heap_mem);
  prx_heap = (uint32_t)heap_mem;
} */
int32_t create_heap(int32_t size)
{
  int32_t ret;

  ret = sys_memory_allocate(MB(size), SYS_MEMORY_PAGE_SIZE_1M, &heap_mem);
  if (ret != 0) {
    // memory allocate error
    heap_mem = 0;
    return(-1);
  }
  prx_heap = (uint32_t)heap_mem;
  return(0);
}

/***********************************************************************
* 
***********************************************************************/
/* void destroy_heap(void)
{
	if (prx_heap)
	{
		sys_memory_free((sys_addr_t)heap_mem);
		prx_heap = 0;
		mc_app = (sys_memory_container_t)-1;
	}
} */
void destroy_heap(void)
{
  if (heap_mem) {
    sys_memory_free((sys_addr_t)heap_mem);
  }
  heap_mem = 0;
  prx_heap = 0;
  mc_app = (sys_memory_container_t)-1;
}

/***********************************************************************
*
***********************************************************************/
void reset_heap(void)
{
	if (prx_heap)
		prx_heap = heap_mem;
}

/***********************************************************************
* 
***********************************************************************/
void *mem_alloc(uint32_t size)
{
	uint32_t add = prx_heap;
	prx_heap += size;
	return (void*)add;
}
