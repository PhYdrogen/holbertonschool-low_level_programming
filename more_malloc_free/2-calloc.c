#include "main.h"
/**
 * _calloc - it's like calloc
 * @nmemb: number of box in the memory
 * @size: the size of the calloc
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int x;

	if ((nmemb || size) == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	for (x = 0; x < ((int) nmemb * (int) size); x++)
	{
		p[x] = 0;
	}
	return (p);
}
