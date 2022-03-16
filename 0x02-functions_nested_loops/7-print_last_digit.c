#include <stdio.h>
#include "main.h"

/**
* print_last_digit - To check  sign of number
* @n: n is the character to  print last digit
*Return: int (Sucess)
*/


int print_last_digit(int n)
{

if (n  == 0)
{
_putchar('0');
return (r);
}
else if (n > 0)
{
int a = n;
int r = a % 10;
_putchar(r + '0');
return (r);
}
else
{
int a = -1 * n;
int r = a % 10;
_putchar(r + '0');
return (r);
}
}
