#include "lists.h"
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
	listint_t *h = *head, *new, *b;
	unsigned int j = idx, k = listint_len(*head);

	if (head)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		if (idx < k && idx > 0)
		{
			while (j > 0)
			{
				b = h;
				h = h->next;
				j--;
			}
			b->next = new;
			new->next = h;
		}
		else if (idx == k)
		{
			add_nodeint_end(head, n);
		}
		else if (idx == 0)
		{
			*head = new;
			new->next = h;
		}
		else
		{
			return (NULL);
		}
		return (new);
	}
return (NULL);
}
