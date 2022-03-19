#include <stdio.h>
#include "main.h"

/**
*print_triangle - Entry point
*Print out a triangle
*@size: height of the triangle
*Return: Always 0 (Success)
*/

void print_triangle(int size)
{
int num, mun;

if (size <= 0)
{
_putchar(10);
}
else
{
for (mun = 1; mun <= size; mun++)
{
if (mun != size)
{
int i = 0;
int j = 0;
while (i < size - mun)
{
_putchar(' ');
i++;
}
while (j < mun)
{
_putchar('#');
j++;
}
}
else
{
for (num = 0; num < mun; num++)
{
_putchar('#');
}
}
_putchar(10);
}
}
}

