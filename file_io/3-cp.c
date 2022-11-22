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
	int fd[2], i = 0, nbchar = 1, size = 0;
	char buffer[TAILLE_BUFF];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd[0] = open(av[1], O_RDONLY);
	if (fd[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0600 | 0060 | 0004);
	if (fd[1] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
		exit(98);
	}
	while (nbchar > 0)
	{
		size = read(fd[0], buffer, 1024);
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
			exit(98);
		}
		nbchar = write(fd[1], buffer, size);
		if (nbchar == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	for (; i < 2; i++)
	{
		if (close(fd[i]) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd[i]);
			exit(100);
		}
	}
	return (0);
}
