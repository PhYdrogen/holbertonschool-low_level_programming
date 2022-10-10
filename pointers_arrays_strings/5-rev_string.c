#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the list of char
 * Return: none
 */
void rev_string(char *s)
{
	int x;
	int n = sizeof(*s);
	int j = 10 - 2;
	char tmp;

	for (x=0; x<5; x++)
	{
		tmp = s[x];
		s[x] = s[j];
		s[j] = tmp;
		j--;
	}
}
