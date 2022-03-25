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
* _strcmp - compares two strings
* @s1: first string to compare and subtract from
* @s2: second string subtracted with
* Return: int of subraction of last compared character (Success)
*/

int _strcmp(char *s1, char *s2)
{
int len;
int i = 0;
int count = 0;
int c;
if (_strlen(s1) <= _strlen(s2))
{
len = _strlen(s1);
}
else
{
len = _strlen(s2);
}
while (i < len)
{
if (s1[i] == s2[i])
{
count++;
}
else
{
c = s1[i] - s2[i];
return (c);
}
i++;
}
return (0);
}
