/**
 * print_diagonal - return no shit fuck this shit
 *
 * @n: positive number
 *
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include "main.h"

void print_diagonal(int n)
{
	int len;
	int space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space =0; space < len; space++)
			{
				_putchar(" ");

			}
			_putchar('\\')
			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
