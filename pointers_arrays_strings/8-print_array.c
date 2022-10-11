#include "main.h"
#include <stdio.h>
/**
 * print_array - it tell my number in my array
 * @a: the array
 * @n: the number of the array
 * Return: none it print
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != 0)
			printf(" ");
		printf("%d", a[x]);
		if (x != (n - 1))
			printf(",");
	}
	printf("\n");
}
