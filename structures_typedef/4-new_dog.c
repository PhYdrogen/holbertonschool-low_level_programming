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
	char *savename;
	char *saveowner;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	savename = malloc(sizeof(name));
	saveowner = malloc(sizeof(owner));
	if (savename == NULL || saveowner == NULL)
	{
		free(savename);
		free(saveowner);
		return (NULL);
	}
	/*save a copy*/
	savename = name;
	savename += ' ';
	saveowner = owner;
	saveowner += ' ';

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
