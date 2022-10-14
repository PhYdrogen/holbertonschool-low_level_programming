#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurence of needle in haystack
 * @haystack: look into
 * @needle: search for
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	char *ori = needle;

	for (x = 0; needle[x] != '\0'; x++)
	{}

	while (*haystack++)
	{
		if ((*haystack || *needle) == '\0')
			return (NULL);
		if (*haystack == *needle)
		{
			while (*haystack++ == *needle++)
			{
				if (*needle == needle[x])
					return (haystack - x);
			}

		}
		needle = ori;
	}
	return (NULL);
}
