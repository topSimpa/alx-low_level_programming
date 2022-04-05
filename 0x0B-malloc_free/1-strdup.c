#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copy a string
* @str: string to copy
* Return: a pointer to the array
*/

char *_strdup(char *str)
{
char *arr = malloc(sizeof(*str));
unsigned int i = 0;
if (str == NULL)
{
	return (NULL);
}
else if (arr != NULL)
{
	while (i < size)
	{
		arr[i] = str[i];
		i++;
	}
}
return (arr);
}
