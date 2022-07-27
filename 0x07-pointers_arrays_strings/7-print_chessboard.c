#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_chessboard - print a model of a chessboard
 *
 * @a: the array that represent the chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int n = 0;
	unsigned int i;

	while (n < 8)
	{
		i = 0;
		while (i < 8)
		{
			putchar(a[n][i]);
			if (i == 7)
				putchar('\n');
			i++;
		}

		n++;
	}
}
