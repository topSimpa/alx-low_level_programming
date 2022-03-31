#include "main.h"

/**
* _puts_recursion - print out a string using recursion
* @s: pointer to the string
* Return: void is return (sucess)
*/


void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(s[0]);
s++;
_puts_recursion(s);
}
_putchar('\n');
}
