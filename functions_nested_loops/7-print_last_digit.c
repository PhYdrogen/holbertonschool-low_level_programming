#include "main.h"
/**
 * print_last_digit - print le last digit of the number
 * @val: the number to test
 * Return: the last digit
 */
int print_last_digit(int val)
{
	int x;
	if (val > 0)
	{
		x = val % 10;
		_putchar(x);
		return (x);
	} else if (val == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		x = val % -10;
		_putchar(x);
		return (x);
}
