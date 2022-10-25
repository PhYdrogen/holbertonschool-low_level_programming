#include "main.h"
/**
 * malloc_checked - allocate memory with malloc
 * @b: the size in int
 * Return: none
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(sizeof(unsigned int) * b);
	if (a == NULL)
		exit(98);
	else
		return (a);
}
