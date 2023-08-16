/**
 * array_iterator - the array elements is executed in the function
 * @array: an array
 * @size : the size of the array
 * @action: the function to be executed
 *
 * description: dont care about it
 * Return: return nothing
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!size || array || action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
