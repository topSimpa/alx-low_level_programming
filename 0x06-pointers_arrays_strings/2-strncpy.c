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
* _strncpy - copies n character from one string to another
* @dest: destination of copy
* @src: variable to copy
* @n: number of character to return
* Return: char pointer to dest (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
int len = n;
int i = 0;
while (i <= len)
{
if (i == len)
{
dest[i] = '\0';
break;
}
dest[i] = src[i];
i++;
}
return (dest);
}
