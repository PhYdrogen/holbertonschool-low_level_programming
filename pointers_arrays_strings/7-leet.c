#include "main.h"
/**
 * leet - turn a to 4 etc LEET
 * @s: the string to leet
 * Return: the string leeted
 */
char *leet(char *s)
{
	char lettr[] = "AaEeOoTtLl";
	char chiffr[] = "4433007711";
	int x,y;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (x = 0; x < sizeof(lettr); x++)
			if (s[y] == lettr[x])
				s[y] = chiffr[x];
	}

	return (s);
}
