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
c = " ";
}

while (c[i] != 0)
{
	n++;
	i++;
}
return (n);
}


/**
* str_concat - concatenate strings
* @s1: string to concatenate
* @s2: string to append
* Return: a pointer to the array
*/

char *str_concat(char *s1, char *s2)
{
char *arr = malloc(count(s1) + 1 + count(s2));

if (arr != NULL)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		arr[i] = s2[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		arr[i + j] = s2[j];
		j++;
	}
}
return (arr);
}
