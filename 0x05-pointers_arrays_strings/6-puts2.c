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
	int a;

	i = strlen(str);
	a = 0;

	while ( a < i)
	{
		putchar(str[i]);
		a =  a + 2;
	}
	putchar('\n');
}
