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

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i < (8))
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
