#include "main.h"

/**
 * _islower - prints lowercase and new line
 *
 * @c: takes an integer value or a character value
 *
 * Return: return 0 when is not lower case return 1 when lower case
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
