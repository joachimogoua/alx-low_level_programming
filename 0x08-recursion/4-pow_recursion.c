#include "main.h"
/**
* _pow_recursion -calculate power
* Return:always results
* @y:second parameter
* @x:fisrt parameter
*/


int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return (x ^ y);
}
}
