#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: n
* Return: int is return (sucess)
*/


int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n ==0)
{
return (1);
}
else
{
return (-1);
}
}
