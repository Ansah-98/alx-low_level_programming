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
		if (i != j)
			putchar(i);
		else
			putchar(10);
	}
	return (0);
}
