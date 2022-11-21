#include "main.h"

/**
 * append_text_to_file - add text after
 * @filename: the file
 * @text_content: the content
 * Return: 1 on succes
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	text_content = text_content == NULL ? "" : text_content;
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
