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
	int j;
	int i;

	i = n;
	j = n;
	if (n > 0)
	{
		(iwhile i != 0)
		{
			while (n != 0)
			{
				_putchar('#');
				--n;
			}
			n = j;
			i = i - 1;
			_putchar('\n')
		}
	}
	_putchar('\n');
}
