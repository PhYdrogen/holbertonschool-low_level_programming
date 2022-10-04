#include "main.h"
/**
 * _abs - it tells if the number is either positive or negative
 * @val: the number to test
 * Return: the value in positive
 */
int _abs(int val)
{
	if (val < 0)
		return (val * -1);
	else
		return (val);
}
