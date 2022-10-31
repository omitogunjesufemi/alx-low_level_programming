#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the text file to read from
 * @letters: count of characters to print
 * Return: numbers of characters written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t count;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDWR, 00600);

	if (fd == -1)
		return (0);
	buffer = malloc((1 + letters) * sizeof(char));

	if (buffer == NULL)
		return (0);
	count = read(fd, buffer, letters);

	if (count == -1)
		return (0);
	count = write(STDOUT_FILENO, buffer, letters);

	if (count == -1)
		return (0);

	free(buffer);
	close(fd);
	return (count);
}
