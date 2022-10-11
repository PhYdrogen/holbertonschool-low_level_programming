#include "main.h"
/**
 * _strncat - concat two string
 * @dest: the destination
 * @src: the source
 * @n: it will use at most n byte
 * Return: the two string concat as pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y, z;

	/* len for src */
	for (x = 0; src[x] != '\0'; x++)
	{}

	/* len for dest */
	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (z = 0; (z < n) && (src[z] != '\0'); z++)
	{
		dest[y + z] = src[z];
	}
	return (dest);
}
