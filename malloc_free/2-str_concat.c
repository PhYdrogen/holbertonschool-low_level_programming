#include "main.h"

/**
 * *str_concat - concat two string
 * @s1: string one
 * @s2: string two
 * Return: a pointer who has the s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
	int x, i;

	if (con == NULL)
		return (NULL);
	for (x = 0; x < (int) strlen(s1); x++)
	{
		con[x] = s1[x];
	}
	for (i = 0; i < (int) strlen(s2); i++)
	{
		con[x] = s2[i];
		x++;
	}
	con[x + 1] = '\0';
	return (con);
}
