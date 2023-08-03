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
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int  __attribute__((unused)) argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 5;
			continue;
		}
		if (cents - 2 >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
