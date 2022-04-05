#include <stdio.h>
#include "main.h"

/**
* write_num - to write out number
* @i: number to print
* Return: void (Sucess)
*/

void write_num(int i)
{
	if (i > 9 && i < 100)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	else if (i > 99 && i < 1000)
	{
		_putchar(i / 100 + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar(i % 10 + '0');
	}
	else if (i > 999)
	{
		_putchar(i / 1000 + '0');
		_putchar((i / 100) % 10 + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar(i % 10 + '0');
	}
	else
	{
		_putchar(i + '0');
	}
}

/**
* print_number - To print a number
* @n: n is the number to print
* Return: void (Sucess)
*/


void print_number(int n)
{
if (n < 0)
{
	_putchar('-');
	n = n * -1;
}
write_num(n);
}

