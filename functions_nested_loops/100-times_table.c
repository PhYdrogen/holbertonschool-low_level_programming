#include "main.h"
/**
 * print_times_table - print the table from 1 to n
 * @n: the number the function takes
 * Return: none
 */
void print_times_table(int n)
{
	int x;
	int j;
	char a = ' ';
	char b = ' ';
	char c = ' ';
	char d = '0';

	if (n >= 0 || n <=15)
	{
		for (x=0;x<=n;x++)
		{
			for (j=0;j<=n;j++)
			{
				if (((x*j) > 9) && ((x*j) < 20))
				{
					c = '1';
					d = ((x*y)%10);
				}
				_putchar(a);
				_putchar(b);
				_putchar(c);
				_putchar(d);
			}
		}

	} else
		_putchar('');
}
