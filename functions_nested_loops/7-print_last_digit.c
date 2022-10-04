#include "main.h"
/**
 * print_last_digit - print le last digit of the number
 * @val: the number to test
 * Return: the last digit
 */
int print_last_digit(int val)
{
	if (val > 0)
	{
		return (val % 10);
	} else if (val == 0)
	{
		return (0);
	} else
		return (val % -10);
}
