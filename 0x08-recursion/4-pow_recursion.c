#include "main.h"

/**
 * _pow_recursion - prints string in reverse
 * @x: string
 *
 * @y: dont even care
 *
 * Return: nothing
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
