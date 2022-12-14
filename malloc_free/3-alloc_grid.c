#include "main.h"
/**
 * alloc_grid - create a 2d array
 * @width: width of the array
 * @height: height
 * Return: the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **list, i, x, y;
	/* check if one of my var is not inf to zero */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate the 2d array of int * because i point to a pointer because */
	/* this is a array composing of pointer and a pointer is 8 bytes */
	list = malloc(sizeof(int *) * height);
	if (list == NULL)
	{
		free(list);
		list = 0;
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		list[i] = malloc(sizeof(int) * width);
		if (list[i] == NULL)
		{
			for (y = i; y >= 0; y--)
			{
				free(list[y]);
				list[y] = 0;
			}
			free(list);
			return (NULL);
		}


		for (x = 0; x < width; x++)
		{
			list[i][x] = 0;
		}
	}

	return (list);

}
