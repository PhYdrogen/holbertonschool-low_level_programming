#include "main.h"
#include <unistd.h>
/**
 * _puts - function that prints a string followed by a new line
 * @str: the string
 * Return: no return value
 */
void _puts(char *str)
{
	int x;

	for (x = 0; *(str + x) != '\0'; x++)
		{}
	write(1, str, x);
	write(1, "\n", 1);
}
