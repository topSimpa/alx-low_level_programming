#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_len - length of a string
 * @c: pointer to the string
 *
 * Return: int of length
 */


unsigned int str_len(char *c)
{
	unsigned int len = 0;

	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - joins a str and n
 * @s1: the first strings
 * @s2: the second string
 * @n: the number of char from the second string
 *
 * Return: a string concated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, len_sn, ind = 0, s = 0;
	char *copy;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len_s1 = str_len(s1);
	len_s2 = str_len(s2);

	if (n >= len_s2)
		n = len_s2;

	len_sn = n + len_s1;
	copy = malloc(len_s1 + n + 1);
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}

	for (; ind < len_sn; ind++)
	{
		if (ind < len_s1)
			copy[ind] = s1[ind];
		else
			copy[ind] = s2[s++];
	}
	copy[ind] = '\0';
	return (copy);
}
