#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: concatenated char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	len = _strlen(dest);
	for (i = len, j = 0; j < n; i++, j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
	}
	return (dest);
}
