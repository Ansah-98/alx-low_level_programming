/**
 * _strncpy - return no shit fuck this shit
 *
 * @src: receives a character:
 *
 * @dest: damn you just disturbing
 *
 * @n : number of times
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
	if ((size_t)n > strlen(src))
	{
		return (strcpy(dest, src));
	}
	else
	{
		strncpy(dest + strlen(dest), src, n);
		dest[strlen(dest) + n] = '\0';
	}
	return (dest);

}
