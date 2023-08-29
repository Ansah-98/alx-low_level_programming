#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *node;

	if (head == NULL)
		return (0);
	node = head;
	while (node != NULL)
	{
		total += node->n;
		node = node->next;
	}
	return (total);
}
