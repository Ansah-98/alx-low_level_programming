/**
 * puts2 - return no shit fuck this shit
 *
 * @str: receives a character:
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */

#include <string.h>
#include <stdio.h>

void puts2(char *str)
{
	int i;

	i = strlen(str);

	for (; i > 0; i--)
	{
		putchar(str[i - 1]);
		putchar('\n')
	}
}
