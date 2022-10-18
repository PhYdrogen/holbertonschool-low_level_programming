#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0 if no error
 */
int main(int argc, char *argv[])
{
	(void)argc;

	while (*argv++)
	{
		if (*argv)
			printf("%s\n",*argv);

		else
			return (0);
	}
	return (0);
}
