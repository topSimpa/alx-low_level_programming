#include <stdio.h>

/**
*main - Entry point
*Print out the numbers in hexadecimal
*Return: Always 0 (Success)
*/

int main(void)
{
int num;

for (num = 48; num <= 57; num++)
{
putchar(num);
}
for (num = 97; num <= 102; num++)
{
putchar(num);
}
putchar(10);

return (0);
}
