#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: nm of arg
 * @argv: list of arg
 * Return: return 1 if error else 0
 */
int main(int argc, char *argv[])
{
	int res = 0, x, i;

	if (argc <= 1)
	{
		printf("O");
		return (1);
	}
	for (x = 1; x < argc ; x++)
	{
		for (i = 0; argv[x][i] != '\0'; i++)
		{
			if (argv[x][i] == 'e')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[x]);
	}
	printf("%d\n", res);
	return (0);
}
