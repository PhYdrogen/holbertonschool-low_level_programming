#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int x;
	int i;

	for (x = 0 ; x < 10 ; x++)
	{
		for (i = 97 ; i <= 122 ; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
