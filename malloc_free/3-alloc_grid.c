#include "main.h"
/**
 * alloc_grid - create a 2d array
 * @width: width of the array
 * @height: height
 * Return: the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **list, i, x;
	/* check if one of my var is not inf to zero */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate the 2d array of int * because i point to a pointer because */
	/* this is a array composing of pointer and a pointer is 8 bytes */
	list = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		list[i] = malloc(sizeof(int) * height);

		for (x = 0; x < height; x++)
		{
			list[i][x] = 0;
		}
	}

	return (list);

}
