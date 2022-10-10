#include "main.h"
#include <unistd.h>
/**
 * print_rev - print the param s in reverse
 * @s: list of char
 * Return: none
 */
void print_rev(char *s)
{
	int x;
	int i;

	/*strlen*/
	for (x = 0; *(s + x) != '\0'; x++)
		{}
	for (i = x; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
