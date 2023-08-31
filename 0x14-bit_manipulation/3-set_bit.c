#include "main.h"
/**
 * set_bit - sets a bit at index
 * @index: index of that bit
 * @n: the number
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
