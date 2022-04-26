#include "lists.h"
#include "1-listint_len.c"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint - adding an element to a linked list end
 * @head: a pointer to a pointer that point to head of l-lists
 *
 * Return: return the address or a pointer to new element
 */

void free_listint(listint_t *head)
{
	listint_t *h;
	int j, i;

	if (head)
	{
		j = listint_len(head) - 1;
		while (j > 0)
		{
			i = 0;
			h = head;
			while (i < j)
			{
				h = h->next;
				i++;
			}
			free(h);
			j--;
		}
		free(head);
	}
}
