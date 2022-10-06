#include "main.h"
/**
 * _isdigit - it tell if my param is upper or not
 * @c: is my number to be tested
 * Return: 1 if it's between 0 to 9, 0 if not
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
