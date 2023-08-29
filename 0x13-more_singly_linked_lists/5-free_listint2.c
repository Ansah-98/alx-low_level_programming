#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - ooh oooh
 * @head: last time will be ma last
 * Return: if they stop i will be going to jail
 *
 */

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

