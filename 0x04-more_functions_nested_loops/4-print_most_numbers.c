#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - To print out 0-9 except 0 and 4
* Print out the numbers in decimal
* Return: void (Success)
*/

void print_most_numbers(void)
{
int num = 0;

for (num = 48; num < 58; num++)
{
if (num == 50 || num == 52)
{
continue;
}
_putchar(num);
}
_putchar(10);

}
