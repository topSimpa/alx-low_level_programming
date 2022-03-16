#include <stdio.h>
#include "main.h"

/**
* print_last_digit - To check  sign of number
* @n: n is the character to  print last digit
*Return: int (Sucess)
*/


int print_last_digit(int n)
{
_putchar(n + 48);
if (n  == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
int r = n % 10;
_putchar(r + 48);
return (r);
}
else
{
int r = (-1 * n) % 10;
_putchar(r + 48);
return (r);
}
}
