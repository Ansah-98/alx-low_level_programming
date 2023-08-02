#include "main.h"

/**
 * is_prime_number - prints string in reverse
 * @n: string
 *
 * Description: damn
 *
 * Return: nothing
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (check_prime(n, 3));
}
/**
 * check_prime - get square root of a number recursively
 * @n: number
 * @a: possible square root
 *
 * Description: dont care
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
