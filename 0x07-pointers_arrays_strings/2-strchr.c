/**
 * _strchr - return no shit fuck this shit
 *
 * @s: receives a character:
 *
 * @c: damn you just disturbing
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>
char *_strchr(char *s, char c)
{
	for (; s; s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
