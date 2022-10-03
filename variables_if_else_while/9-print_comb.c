#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 no error
 * in ascii 0 = 48, 9 = 57
 */
int main(void)
{
	int nombre = 0;

	while (nombre <= 9)
	{
		putchar(nombre);
		putchar(',');
		putchar(' ');
		nombre++;
	}
	putchar('\n');
	return (0);
}
