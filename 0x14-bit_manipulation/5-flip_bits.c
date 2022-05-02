#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int high_bits(unsigned long int r);

/**
 * flip_bits - checks the number of bits to be flipped to chage to m
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits (sucess)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int r = n ^ m;
    return (high_bits(r));
}


unsigned int high_bits(unsigned long int r)
{
	unsigned int val;

	if (r == 0)
	{
		return (0);
	}
	else if (r == 1)
	{
		return (1);
	}
	val = r & 1;
	return (val + high_bits(r >> 1));
}
