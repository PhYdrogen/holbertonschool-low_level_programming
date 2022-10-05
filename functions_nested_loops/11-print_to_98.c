#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n - number i have to reach for 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
		}
	} else
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
}
