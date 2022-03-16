#include <stdio.h>
#include "main.h"

/**
* _abs - To check  sign of number
* @n: n is the character to  get absolute value
*Return: int (Sucess)
*/


int _abs(int n)
{

if (n  == 0)
{
return (0);
}
else if (n > 0)
{
return (n);
}
else
{
return (-1 * n);
}
}
