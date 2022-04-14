#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
*int_index - find the index of a first match
*@array: array to loop over
*@size: the size of the array
*@cmp: the function to apply
*Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int n = 0;

if (size <= 0)
{
	return (-1);
}

if (array && size && cmp)
{
	while (n < size)
	{
		if (cmp(array[n]) != 0)
		{
			return (n);
		}
		n++;
	}
}
return (-1);
}

