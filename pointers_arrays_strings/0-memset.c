#include "main.h"
/**
 * _memset - fill memory with constant btye
 * @s: memory area
 * @b: constant byte
 * @n: n time
 * Return: Returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
