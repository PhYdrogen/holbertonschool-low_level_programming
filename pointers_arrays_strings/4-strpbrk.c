#include "main.h"
/**
 * _strpbrk - search in string s of byte accept
 * @s: the string
 * @accept: what char to look for
 * Return: the number of byte it found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s++)
	{
		if (*s == '\0')
			break;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
}
