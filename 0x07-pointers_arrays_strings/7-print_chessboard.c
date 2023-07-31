/**
 * _strstr - return no shit fuck this shit
 *
 * @haystack: receives a character:
 *
 * @needle: damn you just disturbing
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */
#include <string.h>
#include "main.h"
void print_chessboard(char (*a)[8])
{
	int indx1, indx2;

	for (indx1 = 0; a[indx1][7]; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
			_putchar(a[indx1][indx2]);
		_putchar('\n');
	}
}
