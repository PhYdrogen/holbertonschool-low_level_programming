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
	int x, ls1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ls1 = strlen(s1);

	if (n >= strlen(s2))
	{
		p = realloc(s1, (strlen(s2) + 1));
		if (p == NULL)
			return (NULL);
		/**/
		for (x = 0; x < strlen(s2); x++)
		{
			p[ls1 + x] = s2[x];
		}
		p[ls1 + x + 1] = '\0';
		return (p);
	}
	else
	{
		p = realloc(s1, (n + 1));
		if (p == NULL)
			return (NULL);
		/**/
		for (x = 0; x < n; x++)
		{
			p[ls1 + x] = s2[x];
		}
		p[ls1 + x + 1] = '\0';
		return (p);
	}

	return (p);
}
