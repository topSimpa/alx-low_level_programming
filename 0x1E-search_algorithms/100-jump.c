#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * lin_s - linear search
 * @arr: array to search through
 * @size: size of the array
 * @start: index to start search from
 * @val: value to match
 * @len: the length of search
 *
 * Return: index found or -1
 */

int lin_s(int *arr, size_t len, size_t start, size_t size, int val)
{
	size_t ind;

	for (ind = 0; ind <= len; ind++)
	{
		if (start == size)
			break;
		printf("Value checked array[%ld] = [%d]\n", start, arr[start]);
		if (arr[start] == val)
			return (start);
		start++;
	}
	return (-1);
}


/**
 * jump_search - searches an array for a value binary
 * @array: array to search through
 * @size: length of the specified array
 * @value: the value to find
 *
 * Return: index where value is found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jby, cur, len;

	if (array)
	{
		cur = 0;
		jby = sqrt(size);
		while (1)
		{
			if (cur == 0 && array[0] == value)
				return (lin_s(array, 0, 0, size, value));
			else if (array[jby * cur] >= value || jby * cur > size)
			{

				printf("Value found between indexes [%ld] and [%ld]\n",
					 jby * (cur - 1), jby * cur);
				if (jby * cur > size)
					len = size - (jby * (cur - 1));
				else
					len = jby;
				return (lin_s(array, len, --cur * jby, size, value));
			}
			else
			{
				lin_s(array, 0, cur * jby, size, value);
				cur++;
			}
		}
	}

	return (-1);
}

