#include "variadic_functions.h"
/**
 * sum_them_all - fn to add number
 * @n: the numbers
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int nb;
	va_list liste;

	va_start(liste, n);
	nb = n;

	if (nb == 0)
		return (0);

	i = 0;
	while (nb > 0)
	{
		i += va_arg(liste, int);
		nb--;
	}

	va_end(liste);
	return (i);
}
