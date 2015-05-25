#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double ___atof(const char *str);
int __isdigit(int c);
int __isspace(int c);
double __strtod(const char *s, char **eptr);


void *memset(void *m, int c, size_t n)
{
	char *s = (char *) m;

	while (n-- != 0)
	{
		*s++ = (char) c;
	}

	return m;
}

void *memcpy(void *dst0, const void *src0, size_t len0)
{
	char *dst = (char *)dst0;
	char *src = (char *)src0;

	void *save = dst0;

	while (len0--)
		*dst++ = *src++;

	return save;
}

int memcmp(const void* s1, const void* s2,size_t n)
{
    const unsigned char *p1 = s1, *p2 = s2;
    while(n--)
        if( *p1 != *p2 )
            return *p1 - *p2;
        else
            p1++,p2++;
    return 0;
}


size_t strlen(const char *s) {
    const char *p = s;
    while (*s) ++s;
    return s - p;
}


char *strchr(const char *s, int c)
{
    while (*s != (char)c)
        if (!*s++)
            return 0;
    return (char *)s;
}


char *strstr(const char *s1, const char *s2)
{
    size_t n = strlen(s2);
    while(*s1)
        if(!memcmp(s1++,s2,n))
            return (char *)(s1-1);
    return 0;
}


int strncasecmp (__const char *s1, __const char *s2, size_t n)
{
  int c1, c2;
  while (n > 0)
    {
      c1 = *((unsigned char *)(s1++));
      if (c1 >= 'A' && c1 <= 'Z')
        c1 = c1 + ('a' - 'A');
      c2 = *((unsigned char *)(s2++));
      if (c2 >= 'A' && c2 <= 'Z')
        c2 = c2 + ('a' - 'A');
      if (c1 != c2)
        {
          return (c1 - c2);
        }
      if (c1 == '\0')
        {
          return 0;
        }
      --n;
    }
  return 0;
}

int strcasecmp (__const char *s1, __const char *s2)
{
  int c1, c2, n;
  n=strlen(s1);
  while (n > 0)
    {
      c1 = *((unsigned char *)(s1++));
      if (c1 >= 'A' && c1 <= 'Z')
        c1 = c1 + ('a' - 'A');
      c2 = *((unsigned char *)(s2++));
      if (c2 >= 'A' && c2 <= 'Z')
        c2 = c2 + ('a' - 'A');
      if (c1 != c2)
        {
          return (c1 - c2);
        }
      if (c1 == '\0')
        {
          return 0;
        }
      --n;
    }
  return 0;
}

int strncmp(const char* s1, const char* s2, size_t n)
{
	if(n==0) return 0;
    while(*s1 && (*s1==*s2))
	{
        s1++,s2++;
		n--;
		if(n==0) break;
	}
    return *(const unsigned char*)s1-*(const unsigned char*)s2;
}

int strcmp(const char* s1, const char* s2)
{
    while(*s1 && (*s1==*s2))
        s1++,s2++;
    return *(const unsigned char*)s1-*(const unsigned char*)s2;
}


char *strcpy(char *dest, const char* src)
{
    char *ret = dest;
    while ((*dest++ = *src++))
        ;
    return ret;
}


char *strncpy(char *dest, const char *src, size_t n)
{
    char *ret = dest;
    do {
        if (!n--)
            return ret;
    } while ((*dest++ = *src++));
    while (n--)
        *dest++ = 0;
    return ret;
}

char *strcat(char *dest, const char *src)
{
    char *ret = dest;
    while (*dest)
        dest++;
    while ((*dest++ = *src++))
        ;
    return ret;
}

char *strtok(char * str, const char * delim)
{
    static char* p=0;
    if(str)
        p=str;
    else if(!p)
        return 0;
    str=p+strspn(p,delim);
    p=str+strcspn(str,delim);
    if(p==str)
        return p=0;
    p = *p ? *p=0,p+1 : 0;
    return str;
}

size_t strcspn(const char *s1, const char *s2)
{
    size_t ret=0;
    while(*s1)
        if(strchr(s2,*s1))
            return ret;
        else
            s1++,ret++;
    return ret;
}

size_t strspn(const char *s1, const char *s2)
{
    size_t ret=0;
    while(*s1 && strchr(s2,*s1++))
        ret++;
    return ret;
}

int __isdigit(int c)
{
	if (c < '0')
		return 0;

	if (c > '9')
		return 0;

	// passed both criteria, so it
	// is a numerical char
	return 1;
}

int __isspace(int c)
{
	if ((c>=0x09) && (c<=0x0D))
		return 1;

	if (c==0x20)
		return 1;

	return 0;
}

double __strtod(const char *s, char **eptr)
{
  double d, ret = 0.0, sign = 1.0;
  int    e = 0, esign = 1, flags = 0, i;

  /* remove leading white spaces. */
  for (; (__isspace(*s) != 0); ) ++s;
  if (*s == '-') {
    /* negative value. */
    sign = -1.0;
    ++s;
  }
  else if (*s == '+') ++s;
  for (; (__isdigit(*s) != 0); ++s) {
    /* process digits before decimal point. */
    flags |= 1;
    ret *= 10.0;
    ret += (double)(int)(*s - '0');
  }
  if (*s == '.') {
    for (d = 0.1, ++s; (__isdigit(*s) != 0); ++s) {
      /* process digits after decimal point. */
      flags |= 2;
      ret += (d * (double)(int)(*s - '0'));
      d *= 0.1;
    }
  }
  if (flags != 0) {
    /* test for exponent token. */
    if ((*s == 'e') || (*s == 'E')) {
      ++s;
      if (*s == '-') {
        /* negative exponent. */
        esign = -1;
        ++s;
      }
      else if (*s == '+') ++s;
      if (__isdigit(*s) != 0) {
        for (; (__isdigit(*s) != 0); ++s) {
          /* process exponent digits. */
          e *= 10;
          e += (int)(*s - '0');
        }
        if (esign >= 0) for (i = 0; i < e; ++i) ret *= 10.0;
        else for (i = 0; i < e; ++i) ret *= 0.1;
      }
    }
  }
  if (eptr != NULL) *eptr = (char *)s;
  return (ret * sign);
}

// macro... maybe ? :)
double ___atof(const char *str)
{
  return (__strtod(str, NULL));
}

