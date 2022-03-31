#include "main.h"

/**
*_subtrahend - to subract primes
*@n: integer n
*@i: integer i
*Return: int
*/

int _subtrahend(int n, int i)
{

if (n > 0)
{
i++;
n = n - ((2 * (i)) - 1);
return (1 + _subtrahend(n, i));
}
else
{
return(0);
}
}

/**
* _strlen_recursion - returns the length of a string
* @s: pointer to the string
* Return: int is return (sucess)
*/


int _sqrt_recursion(int n)
{
int r = _subtrahend(n, 0);
if (r * r == n)
{
return (r);
}
else
{
return (-1);
}
}
