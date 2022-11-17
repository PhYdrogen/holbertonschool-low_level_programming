#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: the bit
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, result = 0;


	if (b == NULL)
		return (0);

	i = strlen(b);
	/*strlen a*/
	/*loop in a and if i have a 1*/
	for (; i > 0; i--)
	{
		if (b[i - 1] == 48 || b[i - 1] == 49)
		{
			if (b[i - 1] == 49)
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
