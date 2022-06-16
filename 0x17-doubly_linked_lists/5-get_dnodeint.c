#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include "1-dlistint_len.c"

/**
 *get_dnodeint_at_index - frees a dlist
 *@head: the first node
 *@index: the index
 *
 *Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;

	if (head != NULL && index < dlistint_len(head))
	{

		h = head;
		do {
			h = h->next;
		} while ((--index) > 0);
		return (h);
	}
	return (NULL);
}

