#include "main.h"
/**
 * cap_string - take string as input and out is capitalized with some condition
 * @s: the string to cap
 * Return: Return the string as capitalized
 */
char *cap_string(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{}
	for (y = 0; y < x; y++)
	{
		if(s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		if (s[y] == (' ') || (s[y] == '\t') || (s[y] == '\n') || (s[y] == ',') || (s[y] ==  ';') || (s[y] == '.') || (s[y] == '!') || (s[y] == '?') || (s[y] == '"') || (s[y] == '(') || (s[y] == ')') || (s[y] == '{') || (s[y] == '}') )
		{
			if (s[y+1] >= 97 && s[y+1] <= 122)
				s[y+1] = s[y+1] - 32;
		}
	}
	return (s);
}
