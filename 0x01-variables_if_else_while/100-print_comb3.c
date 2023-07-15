#include <stdio.h>

/**
 *main - entry point of the program
 *
 *
 *
 *Return: Always return 0(success)
 *
 */
int main(void)
{

	int i;
	int j;

	i = 48;
	j = 49;

	while (i < 56)
	{
		for (; j < 57; j++)
		{
			putchar(i);
			putchar(j);
		}
		i++;
		j = i + 1;
	}
	putchar(10);

	return (0);
}
