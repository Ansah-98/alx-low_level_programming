i/**
 * print_array - return no shit fuck this shit
 *
 * @a: receives a character:
 *
 * @n: dont even about this bullshit
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */

#include <string.h>
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(a[i] + '0');
		if (i != n - 1)
			putchar(',');
	}
}
