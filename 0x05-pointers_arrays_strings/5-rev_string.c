#include "main.h"
#include <stdio.h>

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

/**
* rev_string - return a string in reverse
* @s: s is the string pointer (string)
* Return: void (success)
*/

void rev_string(char *s)
{
int l = _strlen(s);
int j = l - 1;
int h = l / 2;
int i = 0;
while (i < h)
{
char r = s[i];
s[i] = s[j - i];
s[j - i] = r;
i++;
}
}
