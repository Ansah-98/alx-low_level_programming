#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end  - nothing really special
 * @head: head offcourse
 * @n: thats the trtuh
 *
 * Return: dont care 
 *
 *
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *current_node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (new_node);
}
