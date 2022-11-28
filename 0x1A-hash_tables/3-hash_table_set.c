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
	int in_ind;
	hash_node_t *new;

	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	in_ind = if_exist(ht->array[index], (const unsigned char *)key);
	if (in_ind != -1)
		return (change_node(ht->array[index], in_ind, value));
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
	strcpy(new->key, key), strcpy(new->value, value);
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	else
		new->next = NULL;
	ht->array[index] = new;
	return (1);
}


/**
 * streq - compares two strings
 * @str1: the first string
 * @str2: the second string
 *
 * Return: 0 or 1
 */


int streq(char *str1, char *str2)
{
	size_t len1;
	size_t i = 0;

	len1 = strlen(str1);
	if (len1 != strlen(str2))
		return (1);

	while (i < len1)
	{
		if (str1[i] !=  str2[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * if_exist - check if key exist before
 *
 * @head: the head of list
 * @key: the key to check for
 *
 * Return: index or -1
 */

int if_exist(hash_node_t *head, const unsigned char *key)
{
	hash_node_t *h = head;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (streq(h->key, (char *)key) == 0)
			return (count);
		h = h->next;
		count++;
	}
	return (-1);
}

/**
 * change_node - adding an element to a linked list end
 * @head: a pointer to a head
 * @index: the index to get
 *
 * Return: return the address to the node or null
 */

int change_node(hash_node_t *head, int index, const char *value)
{
	hash_node_t *h;
	unsigned int j;

	j = index, h = head;
	while (j > 0)
	{
		h = h->next, j--;
	}
	free(h->value);
	h->value = malloc(sizeof(value));
	strcpy(h->value, value);
	return (1);
}
