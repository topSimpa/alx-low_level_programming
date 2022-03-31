#include "main.h"

/**
* _print_rev_recursion - print out a string using recursion backwards
* @s: pointer to the string
* Return: void is return (sucess)
*/


void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
}
