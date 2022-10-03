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

	while (nombre >= 48 && nombre <= 57)
	{
		putchar(nombre);
		nombre++;
	}
	putchar('\n');
	return (0);
}
