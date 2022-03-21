#include "main.h"
#include <stdio.h>

/**
* puts2 - print a string
* @s: s is the string pointer (string)
* Return: void (success)
*/

void puts2(char *s)
{
int i = 0;
while (1)
{
if (s[i] == '\0')
{
break;
}
if (i %  2 == 0)
{
_putchar(s[i]);
}
i++;
}
_putchar('\n');
}

