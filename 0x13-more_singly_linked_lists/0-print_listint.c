#include <stdio.h>
#include <list.h>

size_t size_t print_listint(const listint_t *h)
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
