#include "main.h"
/**
 * _memset -function fills the first n bytes of the memory
 * @s:strings
 * @b: constant string
 * Return : returns a pointer to the memory area
 */


char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b[i];
}
 return(s);
}
