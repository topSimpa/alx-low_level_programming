#include <stdio.h>

/**
*main - Entry point
*Print out the lower-case/uper-case of the english alphabet
*Return: Always 0 (Success)
*/

int main(void)
{
int alpha;

for (alpha = 97; alpha <= 122; alpha++)
{
putchar(alpha);
}

for (alpha = 65; alpha <= 90; alpha++)
{
putchar(alpha);
}

putchar(10);

return (0);
}
