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
	if (*(s + 1) == '\0')
	{
		_putchar('\n');
		return;
	}
	else if(s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
