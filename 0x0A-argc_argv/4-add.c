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
	int x, y, sum = 0;
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
