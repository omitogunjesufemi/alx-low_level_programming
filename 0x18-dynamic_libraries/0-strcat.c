#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: concatenated char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = _strlen(dest);
	for (i = len, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
