#include "main.h"

int str_len(char *s);

/**
 * _strcpy - copying string pointed to by src to dest
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	static char *output;
	int i, len;

	len = str_len(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	dest[-1] = '\0';
	output = dest;
	return (output);
}

/**
 * str_len - the length of a string
 * @s: string
 * Return: int
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
