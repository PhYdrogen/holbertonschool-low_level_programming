#include "main.h"
/**
 * array_range - blabla
 * @min: value min
 * @max: value max
 * Return: a pointer to a array
 */
int *array_range(int min, int max)
{
	int *p;
	int sum, x;

	if (min > max)
		return (NULL);
	sum = (max - min) + 1;
	p = malloc(sizeof(int) * sum);
	if (p == NULL)
		return (NULL);
	for (x = 0; x <= sum ; x++)
	{
		if (min <= max)
		{
			p[x] = min;
			min++;
		}
	}
	return (p);
}
