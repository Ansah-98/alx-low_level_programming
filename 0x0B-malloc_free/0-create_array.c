/**
 * create_array - creates an array
 *
 * @size :  size of array
 *
 * @c : initializer character
 *
 * description: dont know a lot
 *
 * Return : returns an array or null
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
		return (NULL);
	if (a == NULL)
		Return NULL;

	a = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
