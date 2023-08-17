/**
 * print_numbers - just printing numbers
 * @separator: the seperator between the numbers
 * @n: number of arguments to be passed
 * Return: nothing
 *
 */
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = n;

	va_start(ap, n);
	while (i)
	{
		printf("%d", va_arg(ap, int));
		if (!(separator) || i == 1)
		{
			i--;
			continue;
		}
		printf("%s", separator);
		i--;
	}
	printf("\n");
	va_end(ap);
}
