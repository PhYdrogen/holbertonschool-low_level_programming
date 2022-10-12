#include "main.h"
/**
 * _memcpy - function copies byte from to
 * @dest: where it "paste"
 * @src: the source
 * @n: n byte
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
