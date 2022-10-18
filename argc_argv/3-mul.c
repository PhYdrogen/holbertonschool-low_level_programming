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

	if (argc == 3)
	{
		int res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
