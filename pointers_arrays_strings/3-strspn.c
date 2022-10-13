#include "main.h"
/**
 * _strspn - search in string s of byte accept
 * @s: the string
 * @accept: what char to look for
 * Return: the number of byte it found
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y = 0, z = 0, i;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; i < 4; i++)
		{
			if (s[x] == accept[i])
			{
				z++;
				y = 0;
				i = 4;
				continue;
			}
			if (i == 3 && y > 0)
				return (z);

			y++;
		}
	}
	return (z);

}
