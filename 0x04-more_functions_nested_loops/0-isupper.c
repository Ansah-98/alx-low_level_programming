/**
 * _isupper - return no shit fuck this shit
 *
 * @c: receives a character
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
