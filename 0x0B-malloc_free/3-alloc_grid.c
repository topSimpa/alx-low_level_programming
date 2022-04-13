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
int i = 0;
int **arr, s, j;

if (height <= 0 || width <= 0)
{
	return (NULL);
}

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
{
return (NULL);
}

else if (arr != NULL)
{
	for (s = 0; s < height; s++)
	{
		arr[s] = malloc(sizeof(int) * width);
		if (arr[s] == NULL)
		{
			for (; s >= 0; s--)
			{
				free(arr[s]);
			}
			free(arr);
		}
	}

	while (i < height)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
		i++;
	}
}
return (arr);
}

