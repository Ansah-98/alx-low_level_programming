#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	
	if (index == 0)
	{
		temp  = *head;
		*head = (*head )->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;	
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
