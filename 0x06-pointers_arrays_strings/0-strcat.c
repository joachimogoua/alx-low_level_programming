#include "main.h"
/**
 * _strcat -concatener
 * @dest: first parameter
 * @src: second parameter
 * Return: always return dest
 */
char *_strcat(char *dest, char *src)
{
int len1, len2, i, j;
len1 = 0, len2 = 0;
while (src[len1] != '\0')
{
len1++;
}
while (dest[len2] != '\0')
{
len2++;
}
j = 0;
for (i = len1; i <= (len1 + len2); j <= len1)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
