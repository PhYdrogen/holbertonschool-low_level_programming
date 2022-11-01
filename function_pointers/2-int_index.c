#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 *
 * @array: the array it passes
 * @size: the size of the index
 * @cmp: the funct
 *Return: an index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, y;

	if (array == NULL || cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		y = cmp(array[x]);
		if (y == 0 && (x == size - 1))
			return (-1);
		if (y != 0)
			return (x);
	}
	return (x);
}
