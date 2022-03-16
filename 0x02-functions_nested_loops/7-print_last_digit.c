#include <stdio.h>
#include "main.h"

/**
* print_last_digit - To check  sign of number
* @n: n is the character to get last digit
*Return: int (Sucess)
*/


int print_last_digit(int n)
{
int r = n % 10;
if (n  == 0)
{
_putchar(48);
return(0)
}
else if (n > 0)
{
_putchar(48 + r)
return (r);
}
else
{
r = -1 * r;
_putchar(r + 48);
return (r)
}
}
