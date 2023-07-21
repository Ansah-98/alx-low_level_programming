/**
 * print_most_numbers - return no shit fuck this shit
 *
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include "main.h"
#include <stdio.h>

int main(void);
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizz buzz");
			continue;
		}
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%d", i);
	}
}
