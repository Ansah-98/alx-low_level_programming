/**
 * print_numbers - return no shit fuck this shit
 *
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include "main.h"

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
