#include "main.h"

/**
 * print_binary - print in binary the n number
 *@n: the value to print to binary
 *Return: none
 */
void print_binary(unsigned long int n)
{
	{
		if (n > 1)
			print_binary(n >> 1);

		_putchar((n & 1) + '0');
	}
}
