/**
 * print_strings - just printing numbers
 * @separator: the seperator between the numbers
 * @n: number of arguments to be passed
 * @...: strings to be printed out
 * Return: nothing
 *
 */
#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, n);
	while (i < n)
	{
		s = va_arg(ap, char *);
		if (!s)
			printf("nil");
		else
			printf("%s", s);
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
