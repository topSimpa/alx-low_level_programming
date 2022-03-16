#include <stdio.h>
#include "main.h"

/**
* times_table - Used to Print lower case alphabet 10 times
* Return: Void (Sucess)
*/


void times_table(void)
{

int r = 0;
while (r < 10)
{

int e = 0;

while (e < 10)
{
if (e * r >= 10)
{
_putchar((e * r) / 10 + '0');
_putchar((e * r) % 10 + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar((e * r) + '0');
_putchar(',');
_putchar(' ');
}
e++;
}
_putchar(10);
r++;
}
}
