#include "main.h"

/**
 * print_last_digit - prints lowercase and new line
 *
 * @n: takes an integer value or a character value
 *
 * Return: return 0 when is not lower case return 1 when lower case
 *
 */

int print_last_digit(int n)
{
	if (n % 10 == 8)
	{
		_putchar('8');
		return 8;
	}
	else if (n >= 0)
	{
		_putchar((n % 10) + '0');

		return (n % 10);
	}

	else
	{
		_putchar((-n % 10) +  '0');
		return (-n % 10);
	}
}
