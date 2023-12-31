/**
 * argstostr - returns a pointer
 *
 * @ac: counts the number of elements in av
 *
 * @av: array that accepts to it through the console
 *
 * description: does nothing special
 *
 * Return: returns a string pointer or null
 *
 */
#include <string.h>
#include <stdlib.h>
char *argstostr(int ac, char **av)
{
	int i;
	char *s;
	int total_length;

	total_length = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;
	s = malloc(total_length + 1);
	s[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(s, av[i]);
		strcat(s, "\n");
	}
	if (s == NULL)
		return (NULL);
	return (s);
}
