#include "main.h"
/**
 * string_toupper - changer string to uppercase
 * @s: the string to upcased
 * Return: return point of char as uppercase
 */
char *string_toupper(char *s)
{
	for (x = 0; s[x] != '\0'; x++)
	{}
	for (y = 0; (y < x) || (s[y] != '\0'); y++)
	{
		if (s[y] >= 97 && s[y] <= 122)
			s[y] = s[y] + 32;
	}
	return (s);
}
