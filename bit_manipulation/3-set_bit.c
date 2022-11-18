#include "main.h"
/**
 * set_bit - set a bit of index to 1
 * @n: the number to change
 * @index: the index to flip
 * Return: 1 if worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return (1);
}
