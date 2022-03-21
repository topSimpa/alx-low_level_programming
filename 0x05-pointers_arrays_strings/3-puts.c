#include "main.h"
#include <stdio.h>

/**
* _puts - print a string
* @s: s is the string pointer (string)
* Return: void (success)
*/

void _puts(char *s)
{
int i = 0;
while (1)
{
if (s[i] == '\0')
{
break;
}
_putchar(s[i]);
i++;
}
_putchar('\n')
}

