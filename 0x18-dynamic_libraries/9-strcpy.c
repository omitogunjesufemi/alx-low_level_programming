#include "main.h"

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

	len = _strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	dest[-1] = '\0';
	output = dest;
	return (output);
}
