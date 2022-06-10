#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array of each byte set to 0
 * @nmemb - the number of members
 * @size - the size of each members
 *
 * Return: void pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb && size)
	{
		array = malloc(nmemb * size);
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}
		memset(array, 0, nmemb * size);
		return (array);
	}
	return (NULL);
}
