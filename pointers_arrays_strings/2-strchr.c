#include "main.h"
/**
 * _strchr - search c in a string s
 * @s: the string to be search in
 * @c: the char it will be look up for
 * Return: the a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c);
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (s[x]);
	}
	return (NULL);
}
