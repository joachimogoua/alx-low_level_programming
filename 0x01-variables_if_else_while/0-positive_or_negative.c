#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main -displays sign of numbers
 * Return: 0 zero if nothing
*/
/* betty style doc for function main goes there */
/* Main - displays sign of numbers */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("%d is positive", n); }
else if (n == 0)
printf("%d is zero", n);
else
printf("%d is negative", n);
printf("\n");
return (0);
}
