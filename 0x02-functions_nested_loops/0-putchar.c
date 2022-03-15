#include <stdio.h>

/**
* main - Entry point
* always printing _putchar
* Return: Always 0 (Sucess)
*/

int main(void)
{
char s[8] = "_putchar";
int n = 0;
while (n < 8)
{
putchar(s[n]);
n++;
}
putchar(10);

return (0);
}
