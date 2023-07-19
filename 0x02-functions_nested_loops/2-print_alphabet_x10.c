#include "main.h"

/**
 * print_alphabet - prints lowercase and new line
 *
 */

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i < 11 ; i++)
	{

		for (c = 'a'; c <= 'z'; c++)
		{	
			_putchar(c);
		}
	}	_putchar('\n');
}
