#include "hash_tables.h"

/**
 * key_index - generate the index of a key
 *
 * @key: the key to use to generate an index
 * @size: of the array to store the key and value
 *
 * Return: the index generate by function
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return	(hash_djb2(key) % size);
}
