#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

	}
	head = NULL;
}

