#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _strchr - search for sign in sky
 * @s: string of char
 * @c: letter to find
 * Return: pointer of string
 */
char *_strchr(char *s, char c)
{
	while (*s++ != '\0')
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
