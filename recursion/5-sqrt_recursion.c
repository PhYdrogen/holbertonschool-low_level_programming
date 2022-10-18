#include "main.h"
/**
 * square - another func
 * Description: i use another function because you
 * can't do it with only one
 * @x: number
 * @y: the multiply by
 * Return: a number
 */
int square(int x, int y)
{
	if ((y * y) == x)
		return (y);
	if ((y * y) > x)
		return (-1);
	else
		return (square(x, y + 1));
}
/**
 * _sqrt_recursion - square root but recursive
 * Description: the main function
 * @n: take number to square it
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
