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
	int res = 0, x;
	for (x = 1; x < argc ; x++)
	{
		if (argc < 1)
		{
			printf("O");
			return (0);
		}
		if (atoi(argv[x]) == 0)
		{
			printf("Error");
			return (1);
		}
		else
			res += atoi(argv[x]);
	}
	printf("%d\n", res);
	return (0);
}
