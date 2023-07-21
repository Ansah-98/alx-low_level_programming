/**
 * main - prints numbers from 1-100 and checks its whatever i dont care next problem
 *
 *
 * Return: Always 0 (Success)
 *
 */i
#include "main.h"
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
	}
	return (0);
}
