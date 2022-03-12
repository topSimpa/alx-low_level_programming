#include <stdio.h>

/**
*main - Entry point
*Print out the lower-case of the english alphabet
*Return: Always 0 (Success)
*/

int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar(10);

return (0);
}
