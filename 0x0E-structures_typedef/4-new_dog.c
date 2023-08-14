/**
 *
 *
 *
 *
 *
 */
#include <string>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	
	dog_t dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return NULL;

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
