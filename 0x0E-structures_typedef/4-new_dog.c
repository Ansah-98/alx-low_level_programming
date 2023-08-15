#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strlen - length of string
 *
 * @str: string
 *
 * description: no use
 *
 * Return: len
 *
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - copies from one to another
 *
 * @dest: destionation
 * @src: source
 *
 * description: describe
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}


/**
 * new_dog - doggo
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: good owner
 * description: describe use
 *
 * Return: dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = (char *)malloc(_strlen(name) + 1);
	dog->owner = (char *)malloc(_strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
