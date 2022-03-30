#include "main.h"
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
*_strchr - find the first occurence of a char
*@s: the destination string
*@c: char to check for
*Return: return dest string pointer
*/

char *_strchr(char *s, char c)
{
int len = _strlen(s);
int i = 0;
while (i <= len)
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ("nil");
}
