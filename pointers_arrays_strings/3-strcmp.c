#include "main.h"
/**
 * _strcmp - compare two string and tell if it's the same
 * @s1: first string
 * @s2: second string
 * Return: in int the first letter of diff
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		else
			return (0);
	}
}
