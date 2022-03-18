#include <stdio.h>
#include "main.h"

/**
* more_numbers - To print out 0-14
* Print out the numbers in decimal
* Return: void (Success)
*/

void more_numbers(void)
{
int i, num;
num = 0;
i = 0;

for (i = 0; i < 10; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar(num / 10 + '0');
}
_putchar(num % 10 + '0');
}
_putchar(10);

}
}
