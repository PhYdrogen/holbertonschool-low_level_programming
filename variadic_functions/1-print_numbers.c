#include "variadic_functions.h"
/**
 * print_numbers - print all number in format
 * @separator: the separator of cheat num
 * @n: the number of elem
 *Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x, num;
	va_list liste;

	va_start(liste, n);
	num = va_arg(liste, int);

	if (separator == NULL)
		return;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			if ((x + 1) == n)
				printf("%d", num);
			else
				printf("%d%s", num, separator);
		}
		printf("\n");
	}
}
