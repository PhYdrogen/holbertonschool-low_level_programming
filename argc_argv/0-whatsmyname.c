#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0 if no error
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
