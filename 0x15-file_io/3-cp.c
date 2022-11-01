#include "main.h"

void write_to_file(const char *filename, char **buffer);
void read_from_file(const char *filename, char **buffer);
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	buffer = malloc((1 + 1024) * sizeof(char));
	read_from_file(argv[1], &buffer);
	write_to_file(argv[2], &buffer);

	free(buffer);
	return (0);
}

/**
 * read_from_file - opens a content and reads it files
 * @filename: name of file
 * @buffer: for storing a file content
 */
void read_from_file(const char *filename, char **buffer)
{
	int file_from, i;

	file_from = open(filename, O_RDONLY);
	i = read(file_from, *buffer, 1024);
	if (file_from == -1 || i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename);
		exit(98);
	}

	i = close(file_from);
	if (i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d", file_from);
		exit(100);
	}
}

/**
 * write_to_file - opens a content and write to the file
 * @filename: name of file
 * @buffer: for storing a file content
 */
void write_to_file(const char *filename, char **buffer)
{
	int file_to, i;

	file_to = open(filename,
		       O_TRUNC | O_WRONLY | O_CREAT,
		       S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);
	i = write(file_to, *buffer, 1024);
	if (file_to == -1 || i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	i = close(file_to);
	if (i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d", file_to);
		exit(100);
	}
}
