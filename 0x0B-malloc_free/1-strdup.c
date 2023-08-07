/**
 * _strdup - creates an array
 *
 * @str :  size of array
 *
 * description: dont know a lot
 *
 * Return: returns an array or null
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *_strdup(char *str)
{
	int i;
	char *a;

	i = (int)strlen(str);
	if (*str == NULL || *str == "")
		return (NULL);

	if (i == 0)
		return (NULL);
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);

	strcpy(a, str);

	return (a);
}
