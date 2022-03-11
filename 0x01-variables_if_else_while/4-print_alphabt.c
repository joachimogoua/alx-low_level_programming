#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	ch = 'a';
	  for (ch <= 'z'; ch != 'q'&&'e'; ch++)
		putchar(ch);
	  ch = 'A'
	  for (ch <= 'Z'; ch != 'q'&&'e'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
