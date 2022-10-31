#include "main.h"

/**
 * read_textfile - reads a text file and prints it to std out
 * @filename: pointer to the text file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[500];

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	read(fd, buf, letters);
	buf[letters] = '\0';
	close(fd);

	printf("%s\n", buf);
	return (letters);
}
