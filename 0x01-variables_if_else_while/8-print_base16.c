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
		putchar(i + 48);

	for (i = 97; i < 103; i++)
		putchar(i);
	putchar(10);

	return (0);
}
