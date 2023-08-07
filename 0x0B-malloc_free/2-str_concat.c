/**
 * *str_concat - creates an array
 *
 * @s1 :  size of array
 *
 * @s2 : dont care
 *
 * description: dont know a lot
 *
 * Return: returns an array or null
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *str;

	i = j = k;
	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			;
	if (s2 != NULL)
		for (j = 0; s2[j]; j++)
			;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (k < (i + j))
	{
		if (k < i)
			str[k] = s1[k];
		else
			str[i] = s2[k - i];

		k++;
	}
	str[k] = 0;
	return (str);
}
