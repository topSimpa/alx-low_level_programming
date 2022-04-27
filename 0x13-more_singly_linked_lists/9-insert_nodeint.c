#include "lists.h"
#include "3-add_nodeint_end.c"
#include "2-add_nodeint.c"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * insert_nodeint_at_index - adding an element to a linked list end
 * @head: a pointer to a pointer that point to head of l-lists
 * @idx: the index to insert
 * @n: the new integer data to put at index
 *
 * Return: return the address or a pointer to new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *new, *b;
	unsigned int j, k;

	k = listint_len(*head);
	if (head)
	{
		if (idx < k && idx > 0)
		{
			j = idx;
			h = *head;
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				free(new);
				return (NULL);
			}

			while (j > 0)
			{
				b = h;
				h = h->next;
				j--;
			}
			new->n = n;
			b->next = new;
			new->next = h;
		}
		else if (idx == k)
		{
			add_nodeint_end(head, n);
		}
		else if (idx == 0)
		{
			add_nodeint(head, n);
		}
		return (new);
	}
return (NULL);
}
