#include "main.h"
/**
 * reverse_array - reverse the array of param @a
 * @a: the array
 * @n: the lenth of the array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int tmp, x, max;

	max = n - 1;
	for (x = 0; x < (n / 2); x++)
	{
		tmp = a[x];
		a[x] = a[max];
		a[max] = tmp;
		max--;
	}

}
