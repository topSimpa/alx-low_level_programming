#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ind = 0;
	hash_node_t *h;
	int found = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (ind < ht->size)
	{
		h = ht->array[ind];

		if (h)
		{
			if (found == 1)
				printf(", ");
			while (h != NULL)
			{
				printf("'%s': '%s'", h->key, h->value);
				h = h->next;
				if (h)
					printf(", ");
			}
			found  = 1;
		}
		ind++;
	}
	printf("}\n");
}
