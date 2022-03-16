#include <stdio.h>
#include "main.h"

/**
* print_last_digit - To check  sign of number
* @n: n is the character to check for sign
* Return: int (Sucess)
*/


int print_last_digit(int n)
{
n = _abs(n);
int r = n % 10;
_putchar(r + '0');
return (r);

}
