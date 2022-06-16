#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - frees a dlist
 *@head: the first node
 *@index: the index
 *
 *Return: node
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int sum = 0;

	if (head)
	{
		sum += head->n;
		h = head;
		do {
			h = h->next;
			sum += h->n;
		} while (h->next);
	}
	return (sum);
}

