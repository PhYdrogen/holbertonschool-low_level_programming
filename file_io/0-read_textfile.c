#include "main.h"
/**
 * read_textfile - explicit
 * @filename: the file to read
 * @letters: the number of letter to read
 * Return: 0 if cannot read else return the number of char it could print
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd, cp;
	char *buffer;

	buffer = malloc(1 + sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	cp = read(fd, buffer, letters);
	buffer[cp] = '\0';

	write(1, buffer, cp);

	close(fd);
	return (cp);
}
