#include "main.h"
/**
 * print_square - print square
 * @size: the size of the square
 * Return: none
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x <= size; x++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
