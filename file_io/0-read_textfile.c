#include "main.h"
/**
 * read_textfile - explicit
 * @filename: the file to read
 * @letters: the number of letter to read
 * Return: 0 if cannot read else return the number of char it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cp;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(1 + sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	cp = read(fd, buffer, letters);
	if (cp == -1)
		return (0);

	buffer[cp] = '\0';

	if (write(STDOUT_FILENO, buffer, strlen(buffer)) != (ssize_t) strlen(buffer))
	{
		return (0);
	}

	close(fd);
	return (cp);
}
