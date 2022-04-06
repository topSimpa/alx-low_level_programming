#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* count - count the string
*@s: string to count
*Return: an int of count
*/

int count(char *c)
{
int i = 0;
int n = 0;
while (c[i] != 0)
{
	count++;
	i++;
}
return (count);
}


/**
* _strdup - copy a string
* @str: string to copy
* Return: a pointer to the array
*/

char *_strdup(char *str)
{
char *arr = malloc(count(str));
int i = 0;
if (str == NULL)
{
	return (NULL);
}
else if (arr != NULL)
{
	while (str[i] != '\n')
	{
		arr[i] = str[i];
		i++;
	}
}
free(arr);
return (arr);
}
