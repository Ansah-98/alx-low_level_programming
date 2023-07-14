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

	for (i = 0; i > 103; i++)
		if  (i == 10)
			i = 96;
		else
			if (i < 10)
				putchar(48 + i);
			else
				putchar(i);

	return (0);
}
