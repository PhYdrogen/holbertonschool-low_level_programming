#include "3-calc.h"
/**
 * main - entry point
 * @argc: the number of arg
 * @argv: the list of arg
 * Return: 0 if no error
 */
int main(int argc, char *argv[])
{
	int nb1, nb2;
	char *sign;
	(void)argc;

	if (argc != 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[3]);
		sign = argv[2];

		if (strlen(sign) > 1)
		{
			printf("Error\n");
			exit(99);
		}

		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[3]);
		sign = argv[2];


		printf("%d\n", get_op_func(sign)(nb1, nb2));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

}
