#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: 0 it runs good
 */
int main(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
                if (ch != 'e' && ch != 'q')
                {
                        putchar(ch);
                }
                ch++;
        }
        putchar('\n');
