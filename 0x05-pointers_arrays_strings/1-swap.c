#include "main.h"
/**
 * @a: parmeter1
 * @b: parameter2
 * swap_int - function that permits to swap parameters
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
