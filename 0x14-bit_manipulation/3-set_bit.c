#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 *set_bit - set the bit to 1
 * @n: a pointer to the number
 * @index: the index to set to 1
 *
 * Return: return 1 (success), -1 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index <= 32)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
