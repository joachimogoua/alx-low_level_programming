#include "main.h"

/**
 * print_rev - check the code
 * @s: chaine de caractere
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
i = _strlen(s);
for (i = _strlen(s); i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
