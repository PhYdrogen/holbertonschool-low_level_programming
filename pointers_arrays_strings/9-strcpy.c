#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy string to a destination
 * @src: the source to copy
 * @dest: the destination of the copied string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, j;

	for (j = 0; src[j] != '\0'; j++)
		{}
	j++;
	for (x = 0; x < j; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
