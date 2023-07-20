/**
 * more_numbers - return no shit fuck this shit
 *
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include "main.h"

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{	
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
