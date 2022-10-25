#include "main.h"
/**
 * string_nconcat - concat s1 with first of n byte of s2
 * @s1: the first string
 * @s2: the second string
 * @n: the byte of s2 to take from it
 * Return: a newly space memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x, y, ls1, ls2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ls1 = strlen(s1);
	ls2 = strlen(s2);

	if (n >= ls2)
	{
		p = malloc(sizeof(char) * ls1 + ls2 + 1);
		if (p == NULL)
			return (NULL);
		for (x = 0; x < ls1; x++)
			p[x] = s1[x];
		for (y = 0; y < ls2; y++)
			p[x + y] = s2[y];
		p[x + y] = '\0';
		return (p);
	}
	else
	{
		p = malloc(sizeof(char) * ls1 + n + 1);
		if (p == NULL)
			return (NULL);
		for (x = 0; x < ls1; x++)
			p[x] = s1[x];
		for (y = 0; y < n; y++)
			p[x + y] = s2[y];
		p[ls1 + y] = '\0';
		return (p);
	}
	return (p);
}
