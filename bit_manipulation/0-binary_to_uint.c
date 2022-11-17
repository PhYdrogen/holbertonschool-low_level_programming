#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: the bit
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, result = 0;


	if (b == NULL)
		return (0);

	/*strlen a*/
	/*loop in a and if i have a 1*/
	for (i = strlen(b); i > 1; i--)
	{
		if (*b == 48 || *b == 49)
		{
			if (*b == 49)
			{
				result += 1 << j;
			}
		j++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
