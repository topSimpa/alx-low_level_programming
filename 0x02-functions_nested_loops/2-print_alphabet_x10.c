#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Used to Print lower case alphabet 10 times
* Return: Void (Sucess)
*/


void print_alphabet_x10(void)
{
int r = 0;
int n = 97;
while (r < 10)
{
while (n < 123)
{
_putchar(n);
n++;
}
_putchar(10);
r++;
}
}
