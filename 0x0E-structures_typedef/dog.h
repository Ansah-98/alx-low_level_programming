#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - just your normal dog
 *
 * @name: name of the big dog
 * @age: fun fact a day in a mans life = a weeks in a dogs life
 * @owner: so be a good owner please
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
