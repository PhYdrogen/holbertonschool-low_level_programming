#include "function_pointers.h"
/**
 * array_iterator - print each number of an array
 * @array: the array
 * @size: the size
 * @action: the fuction it calls
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if ((array == NULL) | (action == NULL))
		return;
	for (x = 0; x < (int)size; x++)
	{
		action(array[x]);
	}
}
