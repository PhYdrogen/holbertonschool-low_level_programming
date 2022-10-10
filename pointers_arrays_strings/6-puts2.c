#include "main.h"
/**
 * puts2 - print every other line
 * @str: take as input string
 * Return: none
 */
void puts2(char *str)
{
	for (x = 0; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
			putchar(s[x]);
	}
	putchar('\n');
}
