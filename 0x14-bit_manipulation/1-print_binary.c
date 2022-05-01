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
	unsigned long int j, h;
	unsigned long int e = n;
	int c;

	c = find_count(n, 1) + 1;
	for (; c > 0; c--)
	{
		j = c - 1;
		h = 1;
		for (; j > 0; j--)
		{
			h = h * 2;
		}
		if (h > e)
		{
			putchar('0');
		}
		else
		{
			e = e - h;
			putchar('1');
		}
	}
}

/**
 * find_count - find the highest order power
 * @n: the integer to convert
 *
 * Return: returns the power place
 */

int find_count(unsigned long int n, unsigned long int j)
{

	if (j * 2 > n)
	{

		return (0);
	}
	j = j * 2;
	return (1 + find_count(n, j));
}

