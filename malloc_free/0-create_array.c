#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array with malloc
 * @size: the size of the array
 * @c: the letter to assign
 * Return: the array as char
 */
char *create_array(unsigned int size, char c)
{
	char *tab = malloc(size * sizeof(char));
	unsigned int x;

	if (size == 0 || tab == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		tab[x] = c;
	}
	return (tab);
}
