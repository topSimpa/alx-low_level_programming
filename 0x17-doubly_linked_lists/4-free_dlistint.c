#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include "1-dlistint_len.c"

/**
 *
 *
 *
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	size_t len, count, times;

	if(head)
	{
		count = 0, len = dlistint_len(head) - 1;
		while(count < len)
		{
			h = head;
			times = len - count;
			do{
				h = h->next;
			} while ((--times) > 0);
			free(h);
			count++;
		}
	}
	free(head);
}

