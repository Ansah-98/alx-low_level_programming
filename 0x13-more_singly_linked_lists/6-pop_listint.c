#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - gas life
 * @head: dont love any material things
 * Return: but I love the feeling they bring
 *
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);

}
