#include <stdio.h>

/**
*main - Entry point
*Print out the numbers in decimal
*Return: Always 0 (Success)
*/

int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
printf("%d", num);
}
putchar(10);

return (0);
}
