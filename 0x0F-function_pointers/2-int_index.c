/**
 * int_index - returns index
 * @array: array
 * @size: size of array
 * @cmp: function
 *
 * Return: return index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*array++))
			return (i);
	}
	return (-1);
}
