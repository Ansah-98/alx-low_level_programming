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

	if (ac == 0 || av == NULL)
		return (NULL);
	s = malloc(((int)sizeof(char) * (ac - 1) * 2) + 1);
	s[0] = '\0';
	for (i = 2; i < ac * 2; i += 2)
	{
		strcat(s, av[i / 2]);
		strcat(s, '\n');
	}
	if (s == NULL)
		return (NULL);
	return (s);
}
