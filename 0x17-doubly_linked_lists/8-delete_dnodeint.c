#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include "1-dlistint_len.c"

/**
 * delete_dnodeint_at_index - delete desired node
 * @head: the pointer to the first head
 * @index: the index of node
 *
 *Return: return 1 sucess and -1 failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int loop = 0;

	if (*head && index < dlistint_len(*head))
	{
		if (dlistint_len(*head) == 1)
		{
			*head = NULL;
			return (1);
		}

		if (index == 0)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
		{
			for (; loop < index; loop++)
				h = h->next;

			if (index == dlistint_len(*head) - 1)
			{
				h->prev->next = NULL;
			}

			else
			{
				h->next->prev = h->prev;
				h->prev->next = h->next;
			}
		}
		free(h);
		return (1);
	}
	return (-1);
}
