#include "main.h"
/**
 * print_sign - it tells if the number is either positive or negative
 * @n: the number to test
 * Return: 1 if positive, 0 if equal to 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
