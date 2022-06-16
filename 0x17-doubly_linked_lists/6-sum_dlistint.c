#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_dlistint - adding dlistint
 *@head: the first node
 *
 *Return:  sum of int
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int sum = 0;

	if (head)
	{
		h = head;
		while (h)
		{
			sum += h->n;
			h = h->next;
		}
	}
	return (sum);
}

