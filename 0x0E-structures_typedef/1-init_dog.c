#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to type dog
 * @name: pointer to str name
 * @age: age
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
