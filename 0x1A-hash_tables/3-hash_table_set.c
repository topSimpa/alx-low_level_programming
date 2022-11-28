#include "hash_tables.h"

/**
 * hash_table_set - insert a key value pair into a hash table
 *
 * @ht: hash table
 * @key: the key to value
 * @value: the value for the key
 *
 * Return: 1 forsucess 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = malloc(sizeof(key));
	if (new->key == NULL)
	{
		free(new->key), free(new);
		return (0);
	}
	new->value = malloc(sizeof(value));
	if (new->value == NULL)
	{
		free(new->key), free(new->value), free(new);
		return (0);
	}
	strcpy(new->key, key);
	strcpy(new->value, value);
	index = key_index((const unsigned char *)key, ht->size);
	stack_col(ht->array[index], new);
	return (1);
}

/**
 * stack_col - insert into hash node and handles collision by stacking
 *
 * @head: top of the stack node
 * @new: node to add to stack
 *
 * Return: void
 */

void stack_col(hash_node_t *head, hash_node_t *new)
{

	if (head != NULL)
		new->next = head;
	else
		new->next = NULL;
	head = new;
}
