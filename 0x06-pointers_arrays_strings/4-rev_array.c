/**
 * _strcmp - return no shit fuck this shit
 *
 * @s1: receives a character:
 *
 * @s2: damn you just disturbing
 *
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>

int _strcmp(int *a, int n)
{
	int middle;
	int i;
	int temp;

	middle = (n % 2 == 0 ? n/2 : (n - 1) / 2);

	for (i = 0; i < middle; i++)
	{
		temp = a[i];
		a[i] = arr[n - i - 1];
		a[n - i - 1] = temp;

	}
	return (a);
}
