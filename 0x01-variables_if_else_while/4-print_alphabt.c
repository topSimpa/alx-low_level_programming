#include <stdio.h>

/**
*main - Entry point
*Print out the lower-case/except letter e and q of the english alphabet
*Return: Always 0 (Success)
*/

int main(void)
{
int alpha;

for (alpha = 97; alpha <= 122; alpha++)
{
if (alpha == 101 || alpha == 113)
{
continue;
}

putchar(alpha);
}

putchar(10);

return (0);
}
