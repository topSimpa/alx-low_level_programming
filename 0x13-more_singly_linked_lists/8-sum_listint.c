#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * sum_listint - adding an element to a linked list end
 * @head: a pointer to a pointer that point to head of l-lists
 *
 * Return: return the address or a pointer to new element
 */

int sum_listint(listint_t *head)
{
	listint_t *h;
	unsigned int j;
	int sum = 0;

	if (head && (head != NULL))
	{
		j = listint_len(head);
		h = head;
		while (j > 0)
		{
			sum += h->n;
			h = h->next;
			j--;
		}
		return (sum);
	}
return (0);
}
