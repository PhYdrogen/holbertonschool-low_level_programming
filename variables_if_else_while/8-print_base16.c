#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 no error
 * in ascii 0 = 48, 9 = 57 [a-f] = 97 - 102
 */
int main(void)
{
	int nombre = 48;

	while ((nombre >= 48) (&&) (nombre <= 57) || (nombre >= 97) (&&) (nombre <= 102))
	{
		putchar(nombre);
		nombre++;
		if (nombre == 58)
			nombre = 97;
	}
	putchar('\n');
	return (0);
}
