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
	size_t dest len;
	size_t src_len;
	char *resized_dest;

	dest_len = strlen(dest);
	src_len = strlen(src);

	if (dest_len < src_len)
	{
		resized_dest = realloc(dest, src_len + 1);
		if (resized_dest != NULL)
			dest = resized_dest;
		strncpy(dest, src, n);
		return (dest);
	}
}
