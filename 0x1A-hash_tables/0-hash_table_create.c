#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 *
 * @size: number of hash code in the hash_table
 *
 * Return: the address of the new hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t **));
	if (new_table->array == NULL)
	{
		free(new_table->array);
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
