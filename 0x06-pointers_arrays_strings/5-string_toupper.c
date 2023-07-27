/**
 * string_toupper - return no shit fuck this shit
 *
 * @str: receives a character:
 *
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>
#include <ctype.h>

char *string_toupper(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = str;
	for (; *str; str++)
	{
		*str = toupper((unsigned char)*str);
	}
	return (ptr);
}
