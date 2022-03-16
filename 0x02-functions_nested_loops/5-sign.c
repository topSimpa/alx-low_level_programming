#include <stdio.h>
#include "main.h"

/**
* print_sign - To check  sign of number
* @n: n is the character to check for sign
* Return: int (Sucess)
*/


int print_sign(int n)
{

if (n  == 0)
{
putchar(48);
return (0);
}
else if (n > 0)
{
putchar(43);
return (1);
}
else
{
putchar(45);
return (-1);
}
}
