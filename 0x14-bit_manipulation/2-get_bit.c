#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 *get_bit - get the bit at a particular index
 *@n: the number in decimal
 *@index: the index to get
 *
 *Return: return 1 or 0 (success) -1 (fail)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int power;

	power = 1 << index;
	if (power <= n)
	{
		if (n == 0)
		{
			return (n & 1);
		}
		n = n >> index;
		return (n & 1);
	}
	return (-1);
}
