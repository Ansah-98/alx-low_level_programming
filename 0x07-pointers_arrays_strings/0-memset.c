/**
 * _memset - return no shit fuck this shit
 *
 * @s: receives a character:
 *
 * @b: damn you just disturbing
 *
 * @n: dont care again
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (ptr);
}
