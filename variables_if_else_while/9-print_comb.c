#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 no error
 * in ascii 0 = 48, 9 = 57
 */
int main(void)
{
	int nombre = 48;

	while (nombre <= 57)
	{
		putchar(nombre);
		if (nombre != 57)
		{
			putchar(',');
			putchar(' ');
			nombre++;
		}else
			break;
	}
	putchar('\n');
	return (0);
}
