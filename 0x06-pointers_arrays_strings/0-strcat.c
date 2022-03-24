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
int len = _strlen(src) + _strlen(dest);
int i = _strlen(src);
int j = 0;
while (i <= len)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
