/**
 * malloc_checked - returns a pointer
 *
 * @b:yh some number
 *
 * description: lets describe a pointer
 *
 * Return: returns nothing special
 *
 */
#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		free(s);
		exit(98);
	}
	return (s);
}
