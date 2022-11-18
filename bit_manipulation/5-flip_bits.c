#include "main.h"

/**
 * flip_bits - how many bit to flip
 * @n: the first numb
 * @m: the second numb
 * Return: the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0, count = 0, arch = 0;
	unsigned long int nd = 0, md = 0;

	if (n >= 4294967295)
		arch = 64;
	else
		arch = 32;

	for (; x < arch; x++)
	{
		if (x == 32)
		{
			nd = nd >> 2;
			md = md >> 2;
		}
		else
		{
			nd = n & (1 << x);
			md = m & (1 << x);
		}
		if (nd != md)
		{
			count++;
		}
	}
	return (count);
}
