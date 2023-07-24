/**
 * puts_half - return no shit fuck this shit
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

void puts_half(char *str)
{
	int len_str;
	int i;

	len_str = strlen(str);

	if (len_str % 2 != 0)
		i = (len_str / 2) + 1;
	else
		i = len_str / 2;

	for ( ; i < len_str; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
