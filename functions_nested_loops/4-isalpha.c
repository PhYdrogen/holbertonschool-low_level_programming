#include "main.h"
/**
 * _isalpha - check if the char is alphabetic
 * Return: 1 if the char is lower, 0 if not
 * @c: the letter convert in int
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	} else
		return (0);
}
