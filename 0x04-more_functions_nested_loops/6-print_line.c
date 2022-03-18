#include <stdio.h>
#include "main.h"

/**
* print_line - To a line
* Print out _ a number of n times
* @n: the number of times to print _
* Return: void (Success)
*/

void print_line(int n)
{
int num;
num = 0;

while (num < n)
{
_putchar('_');
}
_putchar(10);

}
