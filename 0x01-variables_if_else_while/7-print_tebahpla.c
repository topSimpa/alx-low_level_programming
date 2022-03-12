#include <stdio.h>

/**
*main - Entry point
*Print out the lower-case of the english alphabet in reverse order
*Return: Always 0 (Success)
*/

int main(void)
{
int alpha;

for (alpha = 122; alpha >= 97; alpha--)
{
putchar(alpha);
}
putchar(10);

return (0);
}
