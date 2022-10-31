#include "dog.h"
/**
 * new_dog - init a new dog with typedef
 * @name: the name for the dog
 * @age: the age of the dog
 * @owner: the owner
 * Return: a pointer with dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	int namelen;
	int ownlen;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	namelen = strlen(name) + 1;
	ownlen = strlen(owner) + 1;

	d->name = malloc(namelen);
	if (d->name == NULL)
	{
		free(d->name);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(ownlen);
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);

	return (d);
}
