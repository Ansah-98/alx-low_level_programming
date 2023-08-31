#include "main.h"
/**
 * clear_bit - clears bit
 * @n: numbers to be cleared
 * @index: index to be cleared
 * Return: returns 1 or -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
