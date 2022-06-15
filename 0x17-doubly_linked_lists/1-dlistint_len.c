#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - the length of the linked list
 * @h: the head of the double linked list
 *
 * Return: the length of the double linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h)
	{
		do {
			len++;
		} while ((h = h->next) != NULL);
	}
	return (len);
}
