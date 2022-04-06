#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* count - count the string
*@c: string to count
*Return: an int of count
*/

int count(char *c)
{
int i = 0;
int n = 0;
if (c == 0)
{
return (-1);
}

while (c[i] != 0)
{
	n++;
	i++;
}
return (n);
}


/**
* _strdup - copy a string
* @str: string to copy
* Return: a pointer to the array
*/

char *_strdup(char *str)
{
char *arr = malloc(count(str) + 1);

if (str == NULL)
{
	return (NULL);
}
else if (arr != NULL)
{
int i = 0;

	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
}
return (arr);
}
