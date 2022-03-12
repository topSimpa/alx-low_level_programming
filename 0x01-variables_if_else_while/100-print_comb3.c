#include <stdio.h>

/**
*main - Entry point
*Print out the 2-digit number without repeating the same digit pairs
*Return: Always 0 (Success)
*/

int main(void)
{
int num, m;

for (num = 48; num <= 57; num++)
{
for (m = 48; m <= 57; m++)
{
if (num < m)
{
putchar(num);
putchar(m);
if ((num == 56) && (m == 57))
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
putchar(10);

return (0);
}
