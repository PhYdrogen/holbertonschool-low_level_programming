#include "main.h"
/**
 * _strcat - concat two string
 * @dest: the var to it write
 * @src: the var it take from
 * Return: the two var string concat
 */
char *_strcat(char *dest, char *src)
{
	int x, y, z, j = 0;

	/* strlen for src */
	for (x = 0; src[x] != '\0'; x++)
	{}

	/* strlen for dest */
	for (y = 0; dest[y] != '\0'; y++)
	{}

	/**/
	for (z = y; j <= y; z++)
	{
		dest[z] = src[j];
		j++;
	}
	return (dest);
}
