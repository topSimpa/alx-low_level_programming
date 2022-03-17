#include <stdio.h>
#include "main.h"

/**
* print_to_98 - To check  sign of number
* @n: n is the number to start count from
* Return: void (Sucess)
*/


void print_to_98(int n)
{

if (n > 98)
{
while (n > 97)
{
write_num(n);
n--;
}
}
else
{
while (n < 99)
{
write_num(n);
n++;
}
}
_putchar(10);
}

/**
* write_num - to write out number
* @i: number to print
* Return: void (Sucess)
*/

void write_num(int i)
{
if (i > 9)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
if (i == 98)
{
break;
}
}
else
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
}
