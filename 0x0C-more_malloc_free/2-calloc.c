#include <stdio.h>
#include <stdlib.h>
#include "main.h"



void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb || size)
	{
		array = malloc(nmemb * size);
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}
		return (array);
	}
	return (NULL);
}
