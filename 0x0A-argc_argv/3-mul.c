/**
 * main - return no shit fuck this shit
 *
 * @argc: receives a character
 *
 * @argv: damn dont even care to care
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int  argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
