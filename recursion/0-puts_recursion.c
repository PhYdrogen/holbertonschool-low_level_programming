#include "main.h"
/**
 * _put_recursion - making lowtier printf
 * @s: the string to putchar
 * Return: print the series of string as string?
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
		
}
