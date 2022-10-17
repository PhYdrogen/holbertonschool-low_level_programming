#include "main.h"
/**
 * factorial - math factorial
 * @n: int the number you want to guess
 * Return: an int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
