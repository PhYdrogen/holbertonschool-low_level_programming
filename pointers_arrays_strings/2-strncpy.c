#include "main.h"
/**
 * _strncpy - copy a string to a pointer
 * @dest: to destination
 * @src: from source
 * @n: the number of char max to copy from source
 * Return: as pointer the copy of src with dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; (x < n) && (src[x] != '\0'); x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);

}
