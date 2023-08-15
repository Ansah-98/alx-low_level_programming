/**
 * print_dog - just print dog
 *
 * @d: dont care it is
 *
 * description: dont care
 * Return: nothing
 *
 */
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	d->name != NULL ? print("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age >= 0 ? printf("Age: %6f\n", d->age) : printf("Age: (nil)\n");
	d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
