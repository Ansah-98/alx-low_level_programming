#include "main.h"

/**
 * print_sign - prints lowercase and new line
 *
 * @n: takes an integer value or a character value
 *
 * Return: return 0 when is not lower case return 1 when lower case
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43)
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
