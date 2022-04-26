#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - adding an element to a linked list end
 * @head: a pointer to a pointer that point to head of l-lists
 * @str: a  pointer to the new character to be included
 *
 * Return: return the address or a pointer to new element
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h = *head;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new  == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			(*head) = new;
			return (new);
		}
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
		return (new);
	}
	return (NULL);
}
