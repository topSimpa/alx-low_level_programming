#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/**
 * tot_ascii - calculate the total ascii value of a string
 * @str: the string to evaluate
 *
 * Return: ascii value
 */

unsigned long int tot_ascii(char *str)
{
	unsigned long int tot = 0;

	while (*str)
	{
		tot += *str++;
	}
	return (tot);
}
