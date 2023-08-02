/**
 * _puts_recursion - return no shit fuck this shit
 *
 * @s: receives a character
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include "main.h"
#include <string.h>
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i < (int)strlen(s); i++)
	{
		_putchar(s[i]);
		if (s[i] == '\0')
			_putchar('\n');
	}
}
