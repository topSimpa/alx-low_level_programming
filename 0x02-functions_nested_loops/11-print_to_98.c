#include <stdio.h>
#include "main.h"

/**
* print_to_98 - To check  sign of number
* @n: n is the number to start count from
* Return: void (Sucess)
*/


void print_to_98(int n)
{
int i;
for (i = n; i < 99; i++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else
{
_putchar(i + '0');
}
_putchar(',');
_putchar(' ');
}
_putchar(10);
}
