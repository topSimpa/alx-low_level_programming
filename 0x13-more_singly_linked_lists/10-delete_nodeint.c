#include "lists.h"
#include "1-listint_len.c"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * delete_nodeint_at_index - deleting an element to a linked list end
 * @head: a pointer to a pointer that point to head of l-lists
 * @index: the index to insert
 *
 * Return: return the address or a pointer to new element
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *tail, *b;
	unsigned int j, k = listint_len(*head);

	if (head && h != NULL)
	{
		if (index < k && index > 0)
		{
			j = index;
			while (j > 0)
			{
				b = h;
				h = h->next;
				j--;
			}
			tail = h->next;
			b->next = tail;
		}
		else if (index == 0)
		{
			*head = h->next;
		}
		else if (index == k)
		{
			free(h);
			return (1);
		}
		else
		{
			return (-1);
		}
		free(h);
		return (1);
	}
return (-1);
}
