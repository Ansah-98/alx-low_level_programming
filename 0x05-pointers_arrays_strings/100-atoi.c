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

	while (s[i] != "\O" && (s[i] >= '0' && s[i] <= '9'))
	{
		digit = s[i] - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = (result * 10) + digit;
		i++;
	}
	return (sign * result);
}
