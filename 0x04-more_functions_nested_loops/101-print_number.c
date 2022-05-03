#include <stdio.h>
#include "main.h"

/**
 * write_max - to print limits
 * @m: maximum number
 *
 * Return: nothing
 */

void write_max(int m)
{
	_putchar(m / 1000000000 + '0');
	_putchar((m/ 100000000) % 10 + '0');
	_putchar((m / 10000000) % 10 + '0');
	_putchar((m / 1000000) % 10 + '0');
	_putchar((m / 100000) % 10 + '0');
	_putchar((m / 10000) % 10 + '0');
	_putchar((m / 1000) % 10 + '0');
	_putchar((m / 100) % 10 + '0');
	_putchar((m / 10) % 10 + '0');
	_putchar(m % 10 + '0');

}


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
	else if (i > 999 && i < 10000)
	{
		_putchar(i / 1000 + '0');
		_putchar((i / 100) % 10 + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar(i % 10 + '0');
	}
	else if (i > 99999999 && i < 1000000000)
	{
		_putchar(i / 100000000 + '0');
		_putchar((i / 10000000) % 10 + '0');
		_putchar((i / 1000000) % 10 + '0');
		_putchar((i / 100000) % 10 + '0');
		_putchar((i / 10000) % 10 + '0');
		_putchar((i / 1000) % 10 + '0');
		_putchar((i / 100) % 10 + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar(i % 10 + '0');
	}
	else if (i > 999999999)
	{
		write_max(i);
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

