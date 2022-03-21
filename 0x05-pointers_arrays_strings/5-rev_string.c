#include "main.h"
#include <stdio.h>

/**
* rev_string - return a string in reverse
* @s: s is the string pointer (string)
* Return: void (success)
*/

void rev_string(char *s)
{
int j = 0;
int i = _strlen(s) - 1;
char *c = s;

while (i >= 0)
{
c[j] = s[i];
j++;
i--;
}
s = c;
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

