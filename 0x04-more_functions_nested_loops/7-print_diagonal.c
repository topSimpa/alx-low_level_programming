#include <stdio.h>
#include "main.h"

/**
* print_diagonal - To a line
* Print out _ print diagonal line
* @n: the number of times to print \
* Return: void (Success)
*/

void print_diagonal(int n)
{
int num;
num = 0;

if (n == 0)
{
putchar(10);
}
else
{
while (num < n)
{
putchar(92);
putchar(10);
if (num > 0)
{
int i;
while (i < num)
{
putchar(' ');
i++;
}
}
num++;
}
}
}
