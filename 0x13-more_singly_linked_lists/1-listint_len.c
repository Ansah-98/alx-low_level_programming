#include <stdio.h>
#include "lists.h"
/**
 * listint_len - not special
 * @h: just another h
 *
 * Return: counting
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t counting = 0;

	while (h != NULL)
	{
		h = h->next;
		counting++;
	}
	return (counting);
}
