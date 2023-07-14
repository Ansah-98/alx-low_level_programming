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
	int j = 91;

	for (i = 65 ; i <= j ; i++)
	{
		if (i != j)
			putchar(i);
		else
			putchar(10);
	}
	return (0);
}
