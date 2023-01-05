#include "search_algos.h"
/**
 * print_array - format the output
 * @array: the array
 * @end: the end of the array
 * @start: where it should start
 */
void print_array(int *array, int end, int start)
{
	int j = start;
	char del;

	printf("Searching in array: ");

	for (; j < end; j++)
	{
		del = ',';
		printf("%i%c ", array[j], del);
	}
		printf("%i\n", array[j]);
}
/**
 * binary_search - binary searching
 * @array: the array
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int max = (int)(size - 1), look;
	int floor, min;

	if (array == NULL)
		return (-1);

	min = 0;
	print_array(array, max, min);

	while (min < max)
	{
		floor = ((max + min) / 2);
		look = array[floor];
		if (value > look)
		{
			min = floor + 1;
			print_array(array, max, min);
		}
		else if (value < look)
		{
			max = floor - 1;
			print_array(array, max, min);
		}
		else
		{
			return (floor);
		}
	}
	if (array[min] == value)
	{
		return (min);
	}
	return (-1);
}
