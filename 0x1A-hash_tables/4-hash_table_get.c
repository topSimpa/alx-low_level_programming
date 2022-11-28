#include "hash_tables.h"

/**
 * hash_table_get - get the value
 *
 * @ht: the hash table
 * @key: the key to the hash code
 *
 * Return: char pointer to the value
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *h;
	unsigned int count = 0;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	h = ht->array[index];
	while (h != NULL)
	{
		if (streq(h->key, (char *)key) == 0)
			break;
		h = h->next;
		count++;
	}
	if (count == 0 && ht->array[index] == NULL)
		return (NULL);
	return (h->value);
}
