/**
 * string_touppper - return no shit fuck this shit
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
	for (; *str; str++)
	{
		*str = toupper((unsigned char)*str);
	}

	return (str);
}
