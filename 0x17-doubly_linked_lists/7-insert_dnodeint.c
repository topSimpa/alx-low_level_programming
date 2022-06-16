#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*#include "1-dlistint_len.c"*/

/**
 *insert_dnodeint_at_index - insert a node at an index of dlist
 *@h: the first node
 *@idx: the index
 *@n: the new number to put
 *
 *Return: node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new;

	if (idx <= dlistint_len(*h))
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		if (idx == 0)
			new = add_dnodeint(h, n);
		else if (idx == dlistint_len(*h))
			new = add_add_dnodeint_end(h, n);
		else
		{
			new->n = n;
			head = *h;
			do {
				head = head->next;
				idx--;
			} while (idx > 0);
			new->prev = head->prev;
			new->next = head;
			head->prev->next = new;
			head->prev = new;
		}
		return (new);

	}
	return (NULL);
}

