#include "main.h"
#include <stdio.h>

/**
* print_rev - print a string in reverse
* @s: s is the string pointer (string)
* Return: void (success)
*/

void print_rev(char *s)
{
int i = _strlen(s);
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

/**
* _strlen - return the length of a string
* @s: s is the pointer to an array of char (string)
* Return: int return length of string (success)
*/

int _strlen(char *s)
{
int i = 0;
while (1)
{
if (s[i] == '\0')
{
break;
}
i++;
}
return (i);
}

