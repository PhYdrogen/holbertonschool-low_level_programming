#include "main.h"
/**
 * swap_int - litteraly swap a to b
 * @a: first number
 * @b: second number
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
