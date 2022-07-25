#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - return pointer to first character byte match in s
 * @s: this is the string to scan through
 * @accept: the string to match
 * Return: the number of matched characters
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int match, a_ind;

	match = 0;
	for (; *s != '\0'; s++)
	{

		for (a_ind = 0; accept[a_ind] != '\0'; a_ind++)
		{
			if (*s == accept[a_ind])
			{
				(match++);
				break;
			}
		}
		if (match == 1)
			break;
	}
	return (s);
}
