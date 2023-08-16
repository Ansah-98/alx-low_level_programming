/**
 * print_name - prints the name
 * @name: name of the person
 * @f: function to passed through
 *
 * description: dont know
 * Return: nothing
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
