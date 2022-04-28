#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - change binary to unsigned int
 * @b: the binary string
 *
 * Return: unsigned int is retuned
 */

unsigned int binary_to_uint(const char *b)
{
	int j = 1, count = 0;
	unsigned int k = 0;

	if (b)
	{
		for (; *b != '\0'; b++)
		{
			if (*b != '0' && *b != '1')
				return (0);
			count++;
		}
		count -= 1;
		b -= 1;
		for (; count >= 0; count--)
		{
			k += ((*b) - '0') * j;
			j = j * 2;
			b--;
		}
		return (k);
	}
	return (0);
}
