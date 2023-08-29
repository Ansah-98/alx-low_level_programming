#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - I was ashame all along and I still am
 * @head: you listen
 * @index: shoutout to the bootleggers
 * Return: so at ease with the broke shit
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
