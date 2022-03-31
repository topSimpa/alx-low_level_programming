#include "main.h"

/**
* _pow_recursion - returns the result of x raise to power y
* @x:base to raise to power y
* @y:indices of x
* Return: int is return (sucess)
*/


int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else if (y == 0)
{
return (1);
}
else
{
return (-1);
}
}

