/**
 * leet- dont care wont stress
 *
 *@str:
 *
 * Return: i dont care
 *
 */




char *leet(char *str)
{
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	char leet[] = {'4', '3', '0', '7', '1'};
	int a, b;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (*(str + a) == lower[b] || *(str + a) == upper[b])
				*(str + a) = leet[b];
		}
	}
	return (str);
}
