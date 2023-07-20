/**
 * _isdigit - return no shit fuck this shit
 *
 * @c: receives a character
 *
 * Description: check some stupid shit
 *
 * Return: 0 or 1 depending if upper or lower
 *
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
