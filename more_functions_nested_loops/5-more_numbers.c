#include "main.h"
/**
 * more_numbers - print 0 to 14 with _printchar
 * Return: none
 */
void more_numbers(void)
{
	int x;
	int j;
	char k = '0';

	for (x = 0; x <= 10; x++)
	{
		for (j = 0; j < 15; j++)
		{
			if (k > '9')
				k = '0';
			if (j > 10)
				_putchar('1');
			_putchar(k);
			k++;
		}
		_putchar('\n');
		k = '0';
	}
}
