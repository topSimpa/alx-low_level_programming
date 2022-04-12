#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
*alloc_grid - create a 2 dimensional array where each element is 0
*@height: number of rows
*@width: number of columns
*Return: returns a pointer to a pointer
*/

int **alloc_grid(int width, int height)
{
int s = 0;
int i = 0;
int j = 0;
int **arr = malloc(sizeof(int **) * height);
if (arr == NULL)
{
	free(arr);
	return (NULL);
}

else if (width <= 0 || height <= 0)
{
	free(arr);
	return (NULL);
}

else if (arr != NULL)
{
	while (s < height)
	{
		arr[s] = malloc(sizeof(int) * width);
		if (arr[s] == NULL)
		{
			free(arr[s]);
			free(arr);
			return (NULL);
		}
		s++;
	}

	while (i < height)
	{
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
}
return (arr);
}


