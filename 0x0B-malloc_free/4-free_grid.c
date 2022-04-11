#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_grid - frees a 2d array
*@grid: 2d array
*@height: height
*Return: void
*/

void free_grid(int **grid, int height)
{
int k = 0;

while (k < height)
{
	free(grid[k]);
	k++;
}
free(grid);
}

