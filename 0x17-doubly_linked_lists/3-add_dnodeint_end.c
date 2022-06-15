#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_dnodeint_end - add an int to the end ddlist
 *@head: the head of the double linked list
 *@n: the new integer to be added to the end
 *
 *Return: the pointer to the new added int
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;
	if (*head)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = h;
	new->n = n;
	new->next = NULL;

	if (h)
		(h)->next = new;
	else
		*head = new;

	return (new);

}

