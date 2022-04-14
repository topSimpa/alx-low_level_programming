#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
*array_iterator - applies a function on all element of an array
*@array: array to loop over
*@size: the size of the array
*@action: the function to apply
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int n = 0;

if (array && size && action)
{
	while (n < size)
	{
		action(array[n]);
		n++;
	}
}
}

