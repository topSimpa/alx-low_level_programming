#include "main.h"
#include <stdlib.h>

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
int **arr = malloc(sizeof(int) * heigth);

while (s < height)
{
	int arr[i] = malloc(sizeof(int) * width);
	s++;
}

if (width == 0 || height == 0)
{
	return (NULL);
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
return (arr);
}
