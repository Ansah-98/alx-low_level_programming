/**
 *
 * free_dog - Frees dogs.
 *
 * @d: The dog to be freed.
 *
 *
 *
 *
 */
#include "main.h"
#include <stdlib.h>
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
