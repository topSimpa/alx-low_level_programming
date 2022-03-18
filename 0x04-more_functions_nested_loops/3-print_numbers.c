#include <stdio.h>
#include "main.h"

/**
* print_numbers - To print out 0-9
* Print out the numbers in decimal
* Return: void (Success)
*/

void print_numbers(void)
{
int num = 0;

for (num = 48; num < 58; num++)
{
_putchar(num);
}
_putchar(10);

}
