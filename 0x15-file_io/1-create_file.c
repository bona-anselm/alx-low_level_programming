#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the text file to be created
 * @text_content: NULL terminating string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rd, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (rd = 0; text_content[rd]; rd++)
		;
	wr = write(fd, text_content, rd);
	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
