#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 no error
 * in ascii a = 97 and z = 122
 * A = 65 and Z = 90 , $ = 36
 */
int main(void)
{
	int alpha = 97;

	while (alpha != 36)
	{
		if (alpha > 91 && alpha < 123)
		{
		putchar(alpha);
		alpha++;
		}
		if (alpha == 123)
		alpha = 65;
		if (alpha >= 65 && alpha <= 90)
		{
		putchar(alpha);
		alpha++;
		}
		if (alpha == 91)
		{
			alpha = 36;
			putchar('\n');
		}
	}
	return (0);
}
