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
	int j = 123;

	for (i = 97 ; i <= j ; i++)
	{
		if ((i != j) && (i != 101 && i != 113))
			putchar(i);
		else if (i == j)
			putchar(10);
		else
			continue;
	}
	return (0);
}
