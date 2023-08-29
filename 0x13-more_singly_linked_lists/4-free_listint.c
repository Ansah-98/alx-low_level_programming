#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
	listint_t *node = head;

	while (node)
	{
		listint_t *next_node = node->next;

		free(node);
		node = next_node;
	}
}
