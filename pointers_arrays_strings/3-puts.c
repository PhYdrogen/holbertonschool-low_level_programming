#include "main.h"
#include <unistd.h>
/**
 * _puts - function that prints a string followed by a new line
 * @str: the string
 * Return: no return value
 */
void _puts(char *str)
{
	write(1,str,sizeof(&str));
	write(1,"\n",1);
}
