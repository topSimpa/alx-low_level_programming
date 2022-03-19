#include <stdio.h>

/**
*main - Entry point
*Print out a  1-100
*Return: Always 0 (Success)
*/

int main(void)
{
int num;

for (num = 1; num < 101; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else
{
if (num > 9)
{
putchar(num / 10 + '0');
}
else if (num > 99)
{
putchar(num / 100 + '0');
putchar((num / 100) % 10 + '0');
}
putchar(num % 10 + '0');
}
if (num != 100)
{
putchar (' ');
}
}
putchar(10);
return(0)0
}
