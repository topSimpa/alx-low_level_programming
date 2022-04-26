#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print the element of singly linked list
 * @h: pointer to the type list_t
 *
 * Return: the number of nodes
 * Description: getting to print linked list of value string
 */


size_t print_listint(const listint_t *h)
{

	int i = 0;

	if (h)
	{

		do {

			printf("%d\n", h->n);
			i++;
			h = h->next;
		} while (h);
	}

	return (i);

}
