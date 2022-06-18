#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - add an integer to the begining
 * @n: the integer to add at the front
 * @head: pointer to the head of the dlist
 *
 * Return: the address of the new int
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}

