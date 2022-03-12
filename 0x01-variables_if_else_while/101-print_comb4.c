#include <stdio.h>

/**
*main - Entry point
*Print out the 3-digit number without repeating the same digit pairs
*Return: Always 0 (Success)
*/

int main(void)
{
int num, t, m;

for (num = 48; num <= 57; num++)
{
for (m = 48; m <= 57; m++)
{
for (t = 48; t <= 57; t++)
{
if ((num < m) && (m < t))
{
putchar(num);
putchar(m);
putchar(t);
if ((num == 55) && (m == 56) && (t == 57))
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
putchar(10);

return (0);
}
