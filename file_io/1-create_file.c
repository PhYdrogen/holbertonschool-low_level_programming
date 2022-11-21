#include "main.h"
/**
 * create_file - with content and file name
 * @filename: name of the futur file
 * @text_content: the content for the file
 * Return: 1 on succes else on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
