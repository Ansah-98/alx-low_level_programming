/**
 * sum_them_all - sums all the numbers
 * @n: number of arguments
 * Return: returns sums of arguments passed
 *
 */
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
