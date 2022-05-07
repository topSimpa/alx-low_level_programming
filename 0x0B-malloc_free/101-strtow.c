#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - count the number of word in a string
 * @str: the pointer to the string
 *
 * Return: int of count (sucess)
 */

int count_words(char *str)
{
	int count = 0;

	for (; *str != '\0'; str++)
	{
		if  (*str != ' ' && (*(str - 1) == ' ' || count == 0))
		{
			count++;
		}
	}
	return (count);
}

/**
 * in_len - get the length of all words in a string
 * @str: the string pointer
 *
 * Return: the array length of the words
 */

int in_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != ' ' && str[len] != '\0')
	{
		len++;
	}
	return (len);

}

/**
 * strtow - split a string into words
 * @str: string to split
 *
 * Return: pointer to a pointer
 */


char **strtow(char *str)
{
	char **strtwo;
	int out_index = 0, ind = 0, len;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	strtwo = malloc((sizeof(char *)) * (count_words(str) + 1));
	if (strtwo == NULL || count_words(str) == 0)
	{
		free(strtwo);
		return (NULL);
	}

	for (; *str != '\0'; str++)
	{
		if (*str != ' ' && (*(str - 1) == ' ' || out_index == 0))
		{

			strtwo[ind] = malloc(sizeof(char) * (in_len(str) + 1));
			if (strtwo[ind] == NULL)
			{
				for (; ind >= 0; ind--)
					free(strtwo[ind]);
				free(strtwo);
				return (NULL);
			}

			len = 0;
			while (str[len] != ' ')
			{
				strtwo[out_index][len] = str[len], len++;
			}
			strtwo[out_index][len] = '\0';
			out_index++, ind++;
		}
	}
	strtwo[out_index] = NULL;
	return (strtwo);
}
