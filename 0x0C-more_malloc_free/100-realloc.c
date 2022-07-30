#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate a memory space
 *
 * @ptr: the pointer to the old memory
 * @old_size: the old size
 * @new_size: the new size
 * Return: a pointer to the new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r;

	if (old_size == new_size)
		return (ptr);

	else if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	else if (ptr)
	{
		r = malloc(new_size);
		if (r == NULL)
			free(r);
		else
		{
			r = ptr;
			free(ptr);
		}
		return (r);
	}
	ptr = malloc(new_size);
	return (ptr);
}
