#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - a small printf
 * @format: the format use if this fn
 * Return: none
 */
void print_all(const char * const format, ...)
{	int n;
	const char *type;
	va_list liste;
	char *s, *sep;

	if (format == NULL)
	{ printf("\n");
		return; }
	va_start(liste, format);
	n = strlen(format);
	type = format;
	sep = ", ";
	while (n > 0)
	{
		while (n == 1)
		{ sep = "";
			break; }
		switch (*type)
		{
		case 'c':
			printf("%c%s", va_arg(liste, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(liste, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(liste, double), sep);
			break;
		case 's':
			s = va_arg(liste, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, sep);
			break;
		default:
			break;
		}
		n--;
		type++;
	} printf("\n");
	va_end(liste); }
