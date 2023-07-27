/**
 * cap_string - return no shit fuck this shit
 *
 * @str: receives a character:
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>
#include <ctype.h>

char *cap_string(char *str)
{
	int i;
	char ptr[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i]; i++)
	{
		if (i == 0 || strchr(ptr, str[i - 1]))
			str[i] = toupper((unsigned char)str[i]);
	}
	return (str);
}
