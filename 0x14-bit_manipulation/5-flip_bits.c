#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - flipping bits I guess
 * @n: the number 
 * @m: bit to flip
 * Return: the flipped bit
 *
 *
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
