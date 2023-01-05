#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: int to search
 * Return: return if found or not
 */
int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j <= (int)(size - 1); j++)
	{
		printf("Value checked array[%d] = [%i]\n", j, array[j]);
		if (value == array[j])
		{
			return (j);
		}
	}
	return (-1);
}
