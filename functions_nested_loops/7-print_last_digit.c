#include "main.h"
/**
 * print_last_digit - print le last digit of the number
 * @val: the number to test
 * Return: the last digit
 */
int print_last_digit(int val)
{
	int x;
	int y;

	x = 48 + (val % 10);
	y = 48 + (val % -10);

	if (val > 0)
	{
		_putchar(x);
		return (x);
	} else if (val == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(y);
		return (y);
	}
}
