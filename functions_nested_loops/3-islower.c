#include "main.h"
/**
 * _islower - check if the char is lower
 * Return: 1 if the char is lower, 0 if not
 */
int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 48 && c <= 57))
	{
		return (1);
	} else
		return (0);
}
