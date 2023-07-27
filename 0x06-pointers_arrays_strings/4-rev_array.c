/**
 * reverse_array - return no shit fuck this shit
 *
 * @a: receives a character:
 *
 * @n: damn you just disturbing
 *
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>

void reverse_array(int *a, int n)
{
	int middle;
	int i;
	int temp;

	middle = (n % 2 == 0 ? n / 2 : (n - 1) / 2);

	for (i = 0; i < middle; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
