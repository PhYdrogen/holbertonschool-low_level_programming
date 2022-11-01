#include "function_pointers.h"
/**
 * print_name - void funct to print name
 * @name: the name to print
 * @f: function
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}

