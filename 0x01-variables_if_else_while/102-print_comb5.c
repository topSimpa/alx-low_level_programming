#include <stdio.h>

/**
*main - Entry point
*Print out the 2 2-digit number
*Return: Always 0 (Success)
*/

int main(void)
{
int num, m, t, y;

for (num = 48; num <= 57; num++)
{
for (m = 48; m <= 57; m++)
{

for (t = 48; t <= 57; t++)
{
for (y = 48; y <= 57; y++)
{
if ((num < t) || (num == t && m < y))
{
putchar(num);
putchar(m);
putchar(32);
putchar(t);
putchar(y);
if (num == 57 && m == 56 && t == 57 && y == 57)
{
break;
}
else
{
putchar(44);
putchar(32);
}
}
}
}
}
}
putchar(10);

return (0);
}
