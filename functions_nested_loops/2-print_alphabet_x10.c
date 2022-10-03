#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int tenloop;
	int i;
	for (tenloop = 0 ; 0 < 10 ; tenloop++)
	{
		for (i = 97 ; i <= 122 ; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
