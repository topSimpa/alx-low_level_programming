#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array that contains a range of number
 * @min: the minimum number included in the array
 * @max: the max the number included in the array
 *
 * Return: null or array
 */

int *array_range(int min, int max)
{
	int *array, size, ind = 0;

	if (min <= max)
	{
		size = max - min + 1;

		array = malloc(sizeof(int) * size);
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}

		for (; ind < size; ind++)
		{
			array[ind] = min++;
		}
		return (array);
	}
	return (NULL);
}
