#include "variadic_functions.h"
/**
 * print_strings- print all strings in format
 * @separator: the separator of cheat num
 * @n: the number of elem
 *Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *k;
	va_list liste;

	va_start(liste, n);
	i = n;

	separator = separator == NULL ? "" : separator;

	for (; i > 0; i--)
	{
		k = va_arg(liste, char *);
		if (k == NULL)
			k = "(nil)";
		if (i == 1)
			printf("%s", k);
		else
			printf("%s%s", k, separator);
	}
	va_end(liste);
	printf("\n");
}
