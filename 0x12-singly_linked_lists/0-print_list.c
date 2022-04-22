#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print the element of singly linked list
 * @h: pointer to the type list_t
 *
 * Return: the number of nodes
 * Description: getting to print linked list of value string
 */


size_t print_list(const list_t *h)
{

	unsigned long int i = 0;

	if (h)
	{

		do{

			if (h->str)
			{
				printf("[%i] ", h->len);
				printf("%s\n", h->str);
			}
			else
			{
				printf("[0] (nil)\n");
			}
			i++;
			h = h->next;
		} while (h);
	}

	return (i);

}
