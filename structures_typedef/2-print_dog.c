#include "dog.h"

/**
 * print_dog - printing dog info
 * @d: struct of the dog
 */
void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
	{
		printf("(nil)");
		return;
	}

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
