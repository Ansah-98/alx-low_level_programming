#include "main.h"

/**
 * _isalpha - prints lowercase and new line
 *
 * @c: takes an integer value or a character value
 *
 * Return: return 0 when is not lower case return 1 when lower case
 *
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
