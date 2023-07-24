/**
 * rev_string - return no shit fuck this shit
 *
 * @s: receives a character:
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */

#include <string.h>
#include <stdio.h>

void rev_string(char *s)
{
	int start;
	int end;
	char temp;

	start = 0;
	end = strlen(s) - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
