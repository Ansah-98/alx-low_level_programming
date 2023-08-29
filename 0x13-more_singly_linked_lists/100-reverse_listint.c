#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**d);
 * reverse_listint - I will be home for the holidays
 * @head: and to those I used to know 
 * Return: gotta new knowledgn
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;
	return (*head);
}
