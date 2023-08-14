/**
 * init_dog - naming a dog or something
 * @d: struct type
 * @name: guess the  name again
 *
 * @age: you already know
 * @owner: again be a good owner
 *
 * Return: we dont return anything doggo is poor
 *
 */
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d == NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
