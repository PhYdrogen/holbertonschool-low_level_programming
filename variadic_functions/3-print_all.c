#include "variadic_functions.h"
/**
 * print_char - print char
 * @ap: the letter coming from the va_arg
 * @sep: the separator
 * Return: none
 */
void print_char(va_list ap, char *sep)
{
	char i;

	i = va_arg(ap, int);
	printf("%s%c", sep, i);
}
/**
 * print_int - print int
 * @ap: the letter coming from the va_arg
 * @sep: the separator
 * Return: none
 */
void print_int(va_list ap, char *sep)
{
	int i;

	i = va_arg(ap, int);
	printf("%s%d", sep, i);
}
/**
 * print_float - print float
 * @ap: the letter coming from the va_arg
 * @sep: the separator
 * Return: none
 */
void print_float(va_list ap, char *sep)
{
	float i;

	i = va_arg(ap, double);
	printf("%s%f", sep, i);
}
/**
 * print_string - print string
 * @ap: the letter coming from the va_arg
 * @sep: the separator
 * Return: none
 */
void print_string(va_list ap, char *sep)
{
	char *i;

	i = va_arg(ap, char*);
	i = i == NULL ? "(nil)" : i;
	printf("%s%s", sep, i);
}
/**
 * print_all - a small printf
 * @format: the format use if this fn
 * Return: none
 */

void print_all(const char * const format, ...)
{
	if (format != NULL)
	{
		fmt_t signe[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_string},
			{NULL, NULL}
		};
		int n = 0, i = 0, k = 0;
		va_list liste;
		char *sep;

		va_start(liste, format);
		n = strlen(format);
		sep = "";
		while (n != 0)
		{
			while (i < 4)
			{
				if (signe[i].s[0] == format[k])
				{
					signe[i].f(liste, sep);
					sep = ", ";
					break;
				}
				i++;
			}
			i = 0;
			k++;
			n--;
		}
	va_end(liste);
	}
	printf("\n");
}
