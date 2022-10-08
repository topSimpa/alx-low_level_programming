#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - interpolation search
 * @array: array to search through
 * @size: size of the array
 * @value: the value to be found
 *
 * Return: returns the index of the matched value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t max, min, pos;

	max = size - 1, min = 0;

	if (array)
	{
		while (1)
		{
			pos = min + (
					(double)(((max - min) * (value - array[min])) / (array[max] - array[min]))
			);

			if (pos < min || pos > max)
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				break;
			}

			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] > value)
			{
				max = pos;
				continue;
			}
			else if (array[pos] < value)
			{
				min = pos;
				continue;
			}
			else if (array[pos] == value)
				return (pos);
		}
	}
	return (-1);
}
