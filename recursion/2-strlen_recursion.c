#include "main.h"
/**
 * _strlen_recursion - output the length of string
 * @s: string
 * Return: in int the number of char s has
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
