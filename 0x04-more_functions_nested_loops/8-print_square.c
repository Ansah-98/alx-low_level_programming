/**
 * print_square - return no shit fuck this shit
 *
 * @size: positive number
 *
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include "main.h"

void print_square(int size)
{
	int j;
	int i;


	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
