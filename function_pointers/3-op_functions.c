#include "3-calc.h"
/**
 * op_add - do this
 * @a: first int
 * @b: second int
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - do this
 * @a: first int
 * @b: second int
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - do this
 * @a: first int
 * @b: second int
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - do this
 * @a: first int
 * @b: second int
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - do this
 * @a: first int
 * @b: second int
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
