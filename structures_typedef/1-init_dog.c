#include "dog.h"
#include <stdio.h>
/**
 * init_dog - init a new dog in earth 347
 * @d: a struct for dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
