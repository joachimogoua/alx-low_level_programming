#include "main.h"

/**
 * factorial -calculate factorial of integer n
 * @n: parameter integer n
 * Return:retrun always 0 when it runs well
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
