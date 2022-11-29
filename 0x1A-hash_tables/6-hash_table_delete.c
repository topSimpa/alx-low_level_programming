#include "hash_tables.h"

/**
 * hash_table_delete - free all allocated memory of hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind = 0;
	int j, i;
	hash_node_t *h;

	if (ht == NULL)
		return;

	while (ind < ht->size)
	{
		if (ht->array[ind])
		{
			j = 0;
			h =  ht->array[ind];
			while (h)
			{
				h = h->next, j++;
			}
			j--;
			while (j > 0)
			{
				h = ht->array[ind], i = 0;
				while (i < j)
				{
					h = h->next, i++;
				}
				free(h->key), free(h->value);
				free(h);
				j--;
			}
			free(ht->array[ind]->value);
			free(ht->array[ind]->key), free(ht->array[ind]);
		}
		ind++;
	}
	free(ht->array);
	free(ht);
}
