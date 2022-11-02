#include "3-calc.h"
/**
 * get_op_func - title
 * @s: the sign the user will use
 * @int:
 * @int:
 * Return: an int
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 6)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error");
	exit(99);
}
