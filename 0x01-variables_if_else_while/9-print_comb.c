#include <stdio.h>

/**
*main - Entry point
*Print out the numbers in decimal
*Return: Always 0 (Success)
*/

int main(void)
{
int num;

for (num = 48; num <= 57; num++)
{
putchar(num);
putchar(44);
putchar(32);
}
putchar(10);

return (0);
}
