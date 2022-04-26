#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adding an element to a linked list
 * @head: a pointer to a pointer that point to head of l-lists
 * @n: a  pointer to the new character to be included
 *
 * Return: return the address or a pointer to new element
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head)
	{
		listint_t *new;

		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	return (NULL);
}

