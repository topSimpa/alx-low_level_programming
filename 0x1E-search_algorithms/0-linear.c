#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches an array for a value linearly
 * @array: array to search through
 * @size: length of the specified array
 * @value: the value to find
 *
 * Return: index where value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, *(array));
			if (*array == value)
				return (i);
			i++;
			array++;
		}
	}
	return (-1);
}

