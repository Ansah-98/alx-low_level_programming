/**
 * _atoi - return no shit fuck this shit
 *
 * @s: dont care just code
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int digit;

	result  = 0;
	sign = 1;
	i = 0;

	while (!(s[i] >= '0' && s[i] <= '9'))
		i++;
	if (s[i - 1] == '-')
		sign = -1;

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		digit = s[i] - '0';

		result = (result * 10) + digit;
		i++;
	}
	return (sign * result);
}
