#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - print the binary equivalent of a number
 * @n: the integer to convert to base 2
 *
 * Return: nothing, void
 */



void print_binary(unsigned long int n)
{
	long int c, j, h;
	long int e = n;

	c = find_count(n);
	for (; c >= 0; c--)
	{
		j = c;
		h = 1;
		for (; j > 0; j--)
		{
			h = h * 2;
		}
		if (h > e)
		{
			_putchar('0');
		}
		else
		{
			e = e - h;
			_putchar('1');
		}
	}
}

/**
 * find_count - find the highest order power
 * @n: the integer to convert
 *
 * Return: returns the power place
 */

int find_count(unsigned long int n)
{
	unsigned long int count = 0;
	unsigned long int j = 1;

	while (1)
	{
		if (j * 2 > n)
		{
			return (count);
		}
		j = j * 2;
		count++;
	}
}


