#include <stdio.h>
#include "main.h"

/**
* times_table - Used to Print 9-times table
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
if (e < 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
if (e  == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(' ');
_putchar((e * r) + '0');
if (e < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
e++;
}
_putchar(10);
r++;
}
}


