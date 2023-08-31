#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets the bit of index
 * @n: how long its
 * @index: the index of n
 * Return: 1 or -1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *  8))
		return (-1);


	if ((n &  (1 << index)) == 0)
		return (0);

	return (1);
}
