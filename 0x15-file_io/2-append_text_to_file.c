#include "main.h"

size_t str_len(char *s);
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the null terminated string to add at the end of the
 * file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len;
	int fd, count;
	char *buffer;

	if (filename == NULL)
		return (-1);
	len = str_len(text_content);
	fd = open(filename, O_APPEND | O_RDWR, 00600);
	if (fd == -1)
		return (-1);

	buffer = malloc((1 + len) * sizeof(char));
	if (buffer == NULL)
		return (-1);

	if (text_content !=  NULL)
	{
		count = write(fd, text_content, len);
		if (count == -1)
			return (-1);
	}

	close(fd);
	free(buffer);
	return (1);
}

/**
 * str_len - Get string length
 * @s: string
 * Return: length of a string
 */
size_t str_len(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
