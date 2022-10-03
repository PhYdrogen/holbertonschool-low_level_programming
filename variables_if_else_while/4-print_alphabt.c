#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * Return: 0 no error
  */
int main(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		if (101 == alpha || 113 == alpha)
		{
		alpha++;
		continue;
		}
		else
		{
		putchar(alpha);
		alpha++;
		}
	}
	putchar('\n');
	return (0);
}
