/**
 * print_line - return no shit fuck this shit
 *
 * @n: positive number
 *
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include "main.h"

void print_line(int n)
{
	if (n > 0)
	{

		while (n != 0)
		{
			_putchar(95);
			--n;
		}
	}
	_putchar('\n');
}
