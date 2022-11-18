#include "main.h"

/**
 * print_binary - print in binary the n number
 *@n: the value to print to binary
 *Return: none
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		if ((n & 1) == 1)
		{
			_putchar('1');
			n = n >> 1;
		}
		else
		{
			_putchar('0');
			n = n >> 1;
		}

	}
}
