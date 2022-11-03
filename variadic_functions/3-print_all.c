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

	va_start(liste, format);
	if (format == NULL)
	{ printf("\n");
		return; }
	n = strlen(format);
	type = format;
	sep = ", ";
	while (n > 0)
	{
		if (n == 1)
			sep = "";
		switch (*type)
		{
		case 'c':
			printf("%c%s", va_arg(liste, int), sep);
			n--;
			break;
		case 'i':
			printf("%d%s", va_arg(liste, int), sep);
			n--;
			break;
		case 'f':
			printf("%f%s", va_arg(liste, double), sep);
			n--;
			break;
		case 's':
			s = va_arg(liste, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, sep);
			n--;
			break;
		default:
			n--;
		} type++;
	} printf("\n");
	va_end(liste); }
