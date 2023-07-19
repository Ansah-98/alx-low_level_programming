#include "main.h"

/**
 * jack_bauer - prints lowercase and new line
 *
 *
 * Return: return 0 when is not lower case return 1 when lower case
 *
 */

void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++ )
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0'+ (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
