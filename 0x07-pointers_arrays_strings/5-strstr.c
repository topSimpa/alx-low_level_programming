#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - scan initial part of s for match in accept
 * @s: this is the string to scan through
 * @accept: the string to match
 * Return: the number of matched characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a_ind, match;

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
		if (accept[a_ind] == '\0')
			break;
	}
	return (match);
}


/**
 * _strbrek - return pointer to first character byte match in s
 * @s: this is the string to scan through
 * @accept: the string to match
 * Return: the number of matched characters
 */

char *_strbrek(char *s, char *accept)
{
	unsigned int a_ind;

	if (s && accept)
	{
		for (a_ind = 0; s[a_ind] != '\0'; a_ind++)
		{
			if (*accept == s[a_ind])
				return (s + a_ind);
		}
	}
	return (NULL);
}

/**
 *_strstr - return the frist occurrence of a substring
 *@haystack: the string to scan through
 *@needle: the substring to find
 *Return: pointer to substring in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	unsigned int n = 0;

	start = haystack;
	while (*start != '\0')
	{
		start = _strbrek(start, needle);
		if (start)
		{
			n = _strspn(start, needle);
			if (n == _strlen(needle))
				break;
			start = start + n;
		}
		else
		{
			break;
		}
	}
	return (start);
}

/**
 *_strlen - get the length of a string
 *@s: the string to get length
 *Return: the length of string
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
