#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adding an element to a linked list end
 * @head: a pointer to a pointer that point to head of l-lists
 * @str: a  pointer to the new character to be included
 *
 * Return: return the address or a pointer to new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h;
	unsigned int count = 0;

	h = *head;
	if(head)
	{
		new = malloc(sizeof(list_t));
		if (new  == NULL)
		{
			free(new);
			return (NULL);
		}
		new->str = strdup(str);
		new->next = NULL;
		if (str)
		{

			for(; *str != '\0'; str++)
			{
				count++;
			}
			new->len = count;
		}
		else
		{
			new->len = 0;
		}

		if(*head == NULL)
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
