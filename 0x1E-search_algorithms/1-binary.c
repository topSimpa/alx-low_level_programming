#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches an array for a value binary
 * @array: array to search through
 * @size: length of the specified array
 * @value: the value to find
 *
 * Return: index where value is found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, ind, max, min;
	int cen;

	if (array)
	{
		min = 0, max = size - 1;
		while (1)
		{
			printf("Searching in array: "), ind = 0;
			while (ind  < size)
			{
				printf("%d", array[ind]);
				if (ind++ != size - 1)
					printf(", ");
			}
			printf("\n");

			if (size == 1)
			{
				if (array[0] == value)
					return (min);
				return (-1);
			}

			mid = (size - 1) / 2, cen = array[mid];
			if (value > cen)
			{
				min = max - mid;
				array = &(array[mid + 1]), size = size - (mid + 1);
			}
			else if (value < cen)
				max = min + mid - 1, size = mid;
			else
				return (min + mid);
		}
	}
	return (-1);
}

