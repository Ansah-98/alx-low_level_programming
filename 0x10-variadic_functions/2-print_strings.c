/**
 * print_strings - just printing numbers
 * @separator: the seperator between the numbers
 * @n: number of arguments to be passed
 * Return: nothing
 *
 */
#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = n;
	char *s;

	va_start(ap, n);
	while (i)
	{
		s = va_arg(ap, char *);
		if (s)
			printf("%s", s);
		else
			printf("nil");
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
