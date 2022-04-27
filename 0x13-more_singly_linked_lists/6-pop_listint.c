#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - adding an element to a linked list
 * @head: a pointer to a pointer that point to head of l-lists
 *
 * Return: return the address or a pointer to new element
 */


int pop_listint(listint_t **head)
{
	if (head)
	{
		int n;
		listint_t *new;

		n  = (*head)->n;
		new = (*head)->next;
		free(*head);
		*head  = new;
		return (n);
	}
	return (0);
}

