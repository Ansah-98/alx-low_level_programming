#include "main.h"

/**
 * print_alphabet - prints lowercase and new line
 *
 *
 * Description: This function prints out all the lowercase alphabets
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
