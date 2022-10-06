#include "main.h"
/**
 * _isupper - it tell if my param is upper or not
 * @c: is my char usualy in alpha
 * Return: 1 if it's uppercase, 0 if not
 */
int _isupper(int c)
{
	char charac = c;

	if (charac <= 48 && charac >= 57)
		return (1);
	else
		return (0);
}
