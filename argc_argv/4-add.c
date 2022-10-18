#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0 if no error
 */
int main(int argc, char *argv[])
{
	int res = 0, x, y;

	for (x = 0; x < argc ; x++)
	{
		if (argc < 1)
		{
			printf("O");
			return (0);
		}
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] >= '0' && argv[x][y] <= '9')
				res += atoi(argv[x]);

			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
