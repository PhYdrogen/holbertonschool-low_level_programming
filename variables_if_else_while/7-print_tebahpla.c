#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 no error
 * in ascii a = 97 and z = 122
 */
int main(void)
{
	int alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
