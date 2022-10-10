#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other line
 * @str: take as input string
 * Return: none
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
			putchar(str[x]);
	}
	putchar('\n');
}
