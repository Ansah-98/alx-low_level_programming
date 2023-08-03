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
#include <string.h>
int main(int  argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
