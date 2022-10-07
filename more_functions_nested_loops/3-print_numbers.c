#include "main.h"
/**
 *	print_numbers - print number from 0 to 9
 *	Return: no return
 */
void print_numbers(void)
{
	int x;
	char j = '0';

	for (x = 0; x < 10; x++)
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
