#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - create a well checked malloc
 *
 * @b: size of the memory to allocat
 * Return: void()
 */

void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);
	if (allocated == NULL)
	{
		free(allocated);
		exit(98);
	}

	return (allocated);
}
