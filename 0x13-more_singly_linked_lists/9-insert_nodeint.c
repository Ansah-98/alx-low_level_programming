#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	current = *head;

	if (idx == 0)
	{
		node->next = current;
		*head = node;
		return (node);

	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL || current->next == NULL)
		{
			free(node);
			return (NULL);
		}
		current = current->next;
	}
	node->next = current->next;
	current->next = node;

	return (node);
}
