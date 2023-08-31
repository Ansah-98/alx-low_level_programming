#include <stdlib.h>
#include "main.h"
/**
 * print_binary - prints in binary
 * @n: the number to passed
 * Return: nothing
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
