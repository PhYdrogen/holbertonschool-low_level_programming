#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the list of char
 * Return: none
 */
void rev_string(char *s)
{
	int x, k, j;
	char tmp;

	for (k = 0; *(s + k) != '\0'; k++)
			{}
	j = k - 1;

	for (x = 0; x < (k / 2); x++)
	{
		tmp = s[x];
		s[x] = s[j];
		s[j] = tmp;
		j--;
	}
}
