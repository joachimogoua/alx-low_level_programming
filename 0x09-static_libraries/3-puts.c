#include "main.h"
#include<stdio.h>
/**
 *_puts -check the code
 *
 * @str: chaine de caractere
 */

void _puts(char *str)
{
while (*str)
{
printf("%c", *str);
str++;
}
printf("\n");
}
