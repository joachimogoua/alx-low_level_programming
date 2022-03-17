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
void positive_or_negative(int i)
{
if (i > 0)
{printf("%d is positive", i); }
else if (i == 0)
printf("%d is zero", i);
else
printf("%d is negative", i);
printf("\n");
return (0);
}
