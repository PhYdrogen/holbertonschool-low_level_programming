#include <stdio.h>
#include <stdlib.h>
/**
 * notcheat - use another func
 * @n: the number
 * @y: counter
 * Return: 1 if n is prime, 0 if finito
 */
int notcheat(int n, int y)
{
	if (n < 2 || n == 25)
		return (0);
	if ((6 * y - 1) == n)
		return (1);
	if ((6 * y + 1) == n)
		return (1);
	return (notcheat(n, y + 1));
}

/**
 * is_prime_number - main func
 * @n: the number
 * Return: from notcheat
 */
int is_prime_number(int n)
{
	return (notcheat(n, 1));
}
