#include "main.h"

/**
 * clear_bit - set a bit to zero
 * @n: the number
 * @index: the index
 * Return: if succed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
