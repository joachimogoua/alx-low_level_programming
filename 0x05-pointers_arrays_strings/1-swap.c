#include "main.h"
/**
 * swap_int -function that permits to swap parameters
 * @a: parameter1
 * @b: parameter2
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
