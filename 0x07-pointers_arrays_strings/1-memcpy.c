/**
 * _memcpy - return no shit fuck this shit
 *
 * @dest: receives a character:
 *
 * @src: damn you just disturbing
 *
 * @n: dont care again
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
