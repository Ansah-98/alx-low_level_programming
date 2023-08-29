#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

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
