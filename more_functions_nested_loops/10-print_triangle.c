#include "main.h"
/**
 * print_triangle - print triangle for each size
 * @size: number representing the size of the triangle
 * Return: none
 */
void print_triangle(int size)
{
	int x;
	int j;
	int k = size;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= k)
				_putchar(35);
			else
				_putchar(' ');
		}
		_putchar('\n');
		k--;
	}
}
