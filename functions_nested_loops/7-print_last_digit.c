#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print le last digit of the number
 * @val: the number to test
 * Return: the last digit
 */
int print_last_digit(int val)
{
	int x;
	char j;

	if (val > 0)
	{
		x = (val % 10);
		j = x + '0';
		_putchar(j);
		return (x);
	}
	else if (val < 0)
	{
		x = ((val % -10) * -1);
		j = x + '0';
		_putchar(j);
		return (x);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
