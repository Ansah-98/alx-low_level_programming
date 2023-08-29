#include <stdio.h>
#include "lists.h"
/**
 * print_listint - does nothing special
 * @h: pointer I guess 
 *
 * Return: returns counting
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t counting = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counting++;
	}
	return (counting);
}
