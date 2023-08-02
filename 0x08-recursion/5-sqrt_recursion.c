#include "main.h"

/**
 * _sqrt_recursion - prints string in reverse
 * @n: string
 *
 *
 * Return: nothing
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_sqrt(n, 1));
}
/**
 * get_sqrt - get square root of a number recursively
 * @n: number
 * @c: possible square root
 *
 * Return: square root or -1
 *
 */
int check_prime(int n, int a)
{
	if (n % a == 0 && a != n)
		return (0);
	else if (a > n)
		return (1);
	else
		return (check_prime(n, ++a));
}
