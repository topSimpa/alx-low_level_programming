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
* _strncat - copies one string to another
* @dest: destination of cat
* @src: variable to cat
* @n: the number of byte to cat
* Return: char (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
int len = _strlen(dest) + n;
int i = _strlen(dest);
int j = 0;

while (i <= len)
{
if (i == len)
{
dest[i] = '\0';
break;
}
dest[i] = src[j];
i++;
j++;
}
return (dest);
}

