#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print the element of singly linked list
 * @h: pointer to the type list_t
 *
 * Return: the length of a linked list
 * Description: getting to print linked list of value string
 */


size_t list_len(const list_t *h)
{

	unsigned long int i = 0;

	if (h)
	{

		do {
			i++;
			h = h->next;
		} while (h);
	}

	return (i);

}
