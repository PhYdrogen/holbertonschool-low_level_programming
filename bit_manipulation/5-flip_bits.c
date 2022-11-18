#include "main.h"

/**
 * flip_bits - how many bit to flip
 * @n: the first numb
 * @m: the second numb
 * Return: the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0, count = 0, nd = 0, md = 0;

	for (; x < 32; x++)
	{
		nd = n & (1 << x);
		md = m & (1 << x);
		if (nd != md)
		{
			count++;
		}
	}
	return (count);
}
