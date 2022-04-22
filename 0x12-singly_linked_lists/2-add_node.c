#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adding an element to a linked list
 * @head: a pointer to a pointer that point to head of l-lists
 * @str: a  pointer to the new character to be included
 *
 * Return: return the address or a pointer to new element
 */


list_t *add_node(list_t **head, const char *str)
{
	if (head)
	{
		list_t *new;
		int count = 0;

		new = malloc(sizeof(list_t));

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->str = strdup(str);

		if (str)
		{

			for (; *str != '\0'; str++)
			{
				count++;
			}

			new->len = count;
		}
		else
			new->len = 0;

		new->next = *head;
		*head = new;
		return (*head);
	}
	return (NULL);
}

