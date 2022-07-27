#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagsums - print the sums of diagonal of a matrix
 *
 * @a: the matrix
 * @size: the width of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	long int left, right;
	int l, r;

	left = 0, right = 0;
	l = 0, r = size - 1;

	while (l < size)
	{
		left = left + a[l];
		right = right + a[r];
		l++;
		r--;
		a = a + size;
	}
	printf("%ld, %ld\n", left, right);
}
