#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - rich niggas ass
 * @head: I give the hopeless hope
 *
 * Return: you can through the fork at me
 *
 */

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
