#include "main.h"
#include <stdio.h>

/**
* print_array - print n element of an array
* @a: a is the pointer to an array  (array)
* @n: number of array item to print
* Return: int return length of string (success)
*/

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (a[i] == '\0')
{
break;
}
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
i++;
}
_putchar('\n');
}

