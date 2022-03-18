#include <stdio.h>

/**
*print_square - Entry point
*Print out a square
*@size: size of the square
*Return: Always 0 (Success)
*/

void print_square(int size)
{
int num;

if (size == 0)
{
_putchar(10);
}
else
{
for (num = 0; num < size; num++)
{
for (num = 0; num < size; num++)
{
_putchar('#');
}
_putchar(10);
}
}

}
