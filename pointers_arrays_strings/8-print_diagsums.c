#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sums of diag of array
 * @a: the array
 * @size: the size of the array
 * Return: none it print
 */
void print_diagsums(int *a, int size)
{
	int i, res1 = 0, res2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		/* res 1 */
		if (i == 0)
			res1 += a[i];
		if (i % (size + 1) == 0)
			res1 += a[i];
		/* res 2*/
		if ((i % (size - 1) == 0) && (i != ((size * size) - 1)))
			res2 += a[i];
	}
	printf("%d, %d\n", res1, res2);
}
