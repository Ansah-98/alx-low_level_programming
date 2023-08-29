#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - nothing special again
 * @head: just some head
 * @n: another n
 * Return: new node
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
