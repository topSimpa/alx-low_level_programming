#include "main.h"
#include <stdio.h>

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


/**
* cap_string - compares two strings
* @s: string to capitalize
* Return: int of subraction of last compared character (Success)
*/

char *cap_string(char *s)
{
int len = _strlen(s) - 1;
int i = 0;
while (i < len)
{
if (i == 0 && s[i] >= 97  && s[i] <= 122)
{
s[i] = s[i] - 32;
}
else if (s[i] == 10 || s[i] == 9 || s[i] == 32 || s[i] == 46)
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
i++;
}
return (s);
}
