#include "main.h"
#include <stdio.h>

/**
* puts_half - print half of a string
* @s: s is the string pointer (string)
* Return: void (success)
*/

void puts_half(char *s)
{
int len = _strlen(s);

if (len %  2 == 0)
{
int r = len / 2;
while (r < r + r)
{
_putchar(s[r]);
r++;
}
}
else
{
int r = len + 1 / 2;
while (r < r + (r - 1))
{
_putchar(s[r]);
r++;
}
}
_putchar('\n');
}

/**
* _strlen - change all input to 98
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

