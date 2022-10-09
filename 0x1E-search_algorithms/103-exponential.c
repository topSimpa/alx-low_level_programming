#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * bin_search - binary search for exponential search
 * @array: array to search through;
 * @min: minimum index
 * @max: maximum index
 * @value: value to match
 *
 * Return: returns the index of matched value or -1
 */


int bin_search(int *array, size_t min, size_t max, int value)
{
	size_t ind, pos, size;

	while (1)
	{
		size = (max - min) + 1;
		pos = (size - 1) / 2;
		printf("Searching in array: ");
		for (ind = 0; ind < size; ind++)
		{
			printf("%d", array[min + ind]);
			if (ind != size - 1)
				printf(", ");
			else
				printf("\n");
		}
		if (size == 1)
		{
			if (array[min] == value)
				return (min);
			else
				return (-1);
		}
		else if (value > array[min + pos])
		{
			min = max - pos;
			continue;
		}
		else if (value < array[pos + min])
		{
			max = min + pos - 1;
			continue;
		}
		else if (value == array[pos + min])
			return (pos + min);
	}

}

/**
 * exponential_search - exponential search
 * @array: array to search through
 * @size: size of the array
 * @value: the value to be found
 *
 * Return: returns the index of the matched value or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t max, min, pos;

	max = size - 1, min = 0, pos = 1;
	if (array)
	{
		while (1)
		{

			if (array[pos] > value || pos >= size)
			{
				if (pos >= size)
					max = size - 1;
				else
					max = pos;
				min = pos / 2;
				printf("Value found between indexes [%ld] and [%ld]\n", min, max);
				return	(bin_search(array, min, max, value));
			}
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				min = pos + 1;
			else if (array[pos] == value)
				return (pos);
			pos = pos * 2;
		}
	}
	return (-1);
}
