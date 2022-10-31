#include "main.h"

int str_len(char *s);
/**
 * create_file - It creates a file
 * @filename: name of the file to be created
 * @text_content: a null terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, check;
	size_t len;
	char *buffer;

	i = 1;
	len = str_len(text_content);
	if (filename == NULL)
		return (-1);

	buffer = malloc((1 + len) * sizeof(char));
	if (buffer == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		check = write(fd, text_content, len);
		if (check == -1)
			return (-1);
	}
	close(fd);
	free(buffer);
	return (i);
}
/**
 * str_len - Get length of string
 * @s: string
 * Return: length of string
 */
int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
