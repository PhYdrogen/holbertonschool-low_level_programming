#include "main.h"
/**
 * _strlen - print out the number of the string
 * @s: the string
 * Return: the number of char in string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *(s + x) != '\0'; x++)
		{}
	return (x);
}
