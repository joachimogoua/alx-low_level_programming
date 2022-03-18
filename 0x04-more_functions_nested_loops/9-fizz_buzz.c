#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print buzz fizz or a number
 * Return: 0always 0 it runs good
 */

int main(void)
{
int i;
for (i = 1 ; i <= 100 ; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("FizzBuzz ");
}
else if (((i % 3) == 0) && ((i % 5) != 0))
{
printf("Fizz ");
}
else if (((i % 5) == 0) && ((i % 3) != 0))
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
