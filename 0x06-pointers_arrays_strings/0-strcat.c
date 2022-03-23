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
* _strcat - copies one string to another
*@dest: destination of copy
*@src: variable to copy
*Return: char (Success)
*/

char *_strcat(char *dest, char *src)
{
int len = _strlen(src) + 1 + _strlen(dest);
int i = 0;
while (i < len)
{
if (i == _strlen(dest))
{
dest[i] = src[i];
}
else if (i == len - 1)
{
dest[i] = '\0';
}
i++;
}
return (dest);
}
