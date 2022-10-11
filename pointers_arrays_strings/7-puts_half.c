#include "main.h"
/**
 * puts_half - print half of the string
 * @str: the string going to be cut in half like a potato
 * Return: none
 */
void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
		{}
	if ((x % 2) == 0)
	{
		y = x / 2;
		for (; str[y] != str[x]; y++)
			_putchar(str[y]);
	}
	else
	{
		y = (x + 1) / 2;
		for (; str[y] != str[x]; y++)
			_putchar(str[y]);
	}
	_putchar('\n');
}
