#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_nodeint_at_index - adding an element to a linked list end
 * @head: a pointer to a pointer that point to head of l-lists
 * @index: the index to get
 *
 * Return: return the address or a pointer to new element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int j;

	if (head && (head != NULL))
	{
		j = index;
		h = head;
		while (j > 0)
		{
			h = h->next;
			j--;
		}
		return (h);
	}
return (NULL);
}
