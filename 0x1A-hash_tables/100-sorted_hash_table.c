#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 *
 * @size: the number of buckets nodes
 *
 * Return: the address of the new shash_table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	new_table  = malloc(sizeof(shash_table_t));
	if (new_table  == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table->array), free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}


/**
 * shash_table_set - insert a key value pair into a shash table
 *
 * @ht: shash table
 * @key: the key to value
 * @value: the value for the key
 *
 * Return: 1 for sucess 0 for failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int in_ind;
	shash_node_t *new;

	if (ht == NULL)
		return (0);
	index  = key_index((const unsigned char *)key, ht->size);
	in_ind = if_exist2(ht->array[index], (const unsigned char *)key);
	if (in_ind != -1)
		return (change_node2(ht->array[index], in_ind, value));
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key), new->value = strdup(value);
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	else
		new->next = NULL;
	ht->array[index] = new;
	set_sortedlist(ht, new);
	return (1);
}

/**
 * streq2 - compares the equality of two strings
 *
 * @str1: the first string
 * @str2: the second string to match
 *
 * Return: 0 or 1
 */


int streq2(char *str1, char *str2)
{
	size_t len1;
	size_t i = 0;

	len1 = strlen(str1);
	if (len1 != strlen(str2))
		return (1);

	while (i < len1)
	{
		if (str1[i] != str2[i])
			return (1);
	}
	return (0);
}

/**
 * if_exist2 - check if key exist before
 *
 * @head: the head of the list
 * @key: the key to check for
 *
 * Return: index or -1
 */

int if_exist2(shash_node_t *head, const unsigned char *key)
{
	shash_node_t *h = head;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (streq2(h->key, (char *)key) == 0)
			return (count);
		h = h->next;
		count++;
	}
	return (-1);
}


/**
 * change_node2 - change a key value
 *
 * @head: a pointer to a head
 * @index: the index to get
 * @value: the value to be changed to
 *
 * Return: return the address to the node or null
 */

int change_node2(shash_node_t *head, int index, const char *value)
{
	shash_node_t *h;
	unsigned int j;

	j = index, h = head;
	while (j > 0)
	{
		h = h->next, j--;
	}
	free(h->value);
	h->value = strdup(value);
	return (1);
}


/**
 * shash_table_get - get a value by key
 *
 * @ht: the hash table
 * @key: the key to the shash code
 *
 * Return: char pointer to the value
 */


char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *h;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	h = ht->array[index];
	while (h != NULL)
	{
		if (streq2(h->key, (char *)key) == 0)
			return (h->value);
		h = h->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the shash table
 *
 * @ht: the shash table
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *h;

	if (ht == NULL)
		return;

	h = ht->shead;
	printf("{");
	while (h)
	{
		printf("'%s': '%s'", h->key,  h->value);
		h = h->snext;
		if (h)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the hash table in reverse
 *
 * @ht: the shash table (sorted table)
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *h;

	if (ht == NULL)
		return;

	h = ht->stail;
	printf("{");
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		h =  h->sprev;
		if (h)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - free all allocated memory of shash table
 *
 * @ht: the shash table
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	int j = 0, i;
	shash_node_t *h;

	if (ht == NULL)
		return;


	h = ht->shead;
	while (h)
	{
		h = h->snext, j++;
	}
	j--;
	while (j > 0)
	{
		h = ht->shead, i = 0;
		while (i < j)
		{
			h = h->snext, i++;
		}
		free(h->key), free(h->value);
		free(h);
		j--;
	}
	free(ht->shead->value);
	free(ht->shead->key), free(ht->shead);
	free(ht->array);
	free(ht);
}

/**
 * set_sortedlist - set up the sorted double linked list
 *
 * @ht: the shash table
 * @new: the new node(bucket) to add
 *
 * Return: void
 */

void set_sortedlist(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *h;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = new;
		new->sprev = NULL;
		new->snext = NULL;
		ht->stail = new;
	}
	else if (strcmp(new->key, ht->shead->key) < 0)
	{
		new->sprev = NULL;
		ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
	}
	else if (strcmp(new->key, ht->stail->key) > 0)
	{
		new->sprev = ht->stail;
		new->snext = NULL;
		ht->stail->snext = new;
		ht->stail = new;
	}
	else
	{
		h = ht->shead;
		while (strcmp(new->key, h->key) > 0)
		{
			h = h->snext;
		}
		new->sprev = h->sprev;
		new->snext = h;
		h->sprev->snext = new;
		h->sprev = new;
	}
}
