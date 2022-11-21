#include "main.h"
#define TAILLE_BUFF 1024
/**
 * main - check the code
 * @ac: number of arg
 * @av: the arg
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd[2], i = 0;
	char buffer[TAILLE_BUFF];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd[0] = open(av[1], O_RDONLY);
	if (fd[0] < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fd[1] < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	write(fd[1], buffer, read(fd[0], buffer, 1024));

	for (; i < 2; i++)
	{
		if (close(fd[i]) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd[i]);
			exit(100);
		}
	}
	return (0);
}
