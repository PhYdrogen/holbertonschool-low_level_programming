#include "main.h"
/**
 * print_diagonal - print \ in range to make a diagonal
 * @n: the number of time the \ will be printed
 * Return: none
 */
void print_diagonal(int n)
{
	int x;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x != n; x++)
		{
			for (j = 1; j <= x; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
