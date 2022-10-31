#ifndef DOG_H
#define DOG_H
/**
 * struct dog - tag his dog
 * @name: of the dog
 * @age: his age in dog year
 * @owner: the master of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
