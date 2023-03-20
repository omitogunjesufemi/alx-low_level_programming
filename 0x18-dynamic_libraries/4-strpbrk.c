#include "main.h"

int item_exist(char c, char *accept);

/**
 * _strpbrk - a function that locates the first occurence
 *            in the string s of any of the bytes in the
 *            string accept
 * @s: string
 * @accept: pattern to use
 * Return: a pointer to the byte in s that matches one of the bytes
 *         or return NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	static char *result = '\0';
	int length_s = 0;

	while (s[length_s] != '\0')
	{
		length_s++;
	}

	for (i = 0; i < length_s; i++)
	{
		if (item_exist(s[i], accept))
		{
			result = &s[i];
			break;
		}
	}
	return (result);
}

/**
 * item_exist - checking if item exists in accept
 * @c: item
 * @accept: item to iterate over
 * Return: 1 or 0
 */
int item_exist(char c, char *accept)
{
	int i;
	int result = 0;
	int length_accept = 0;

	while (accept[length_accept] != '\0')
	{
		length_accept++;
	}

	for (i = 0; i < length_accept; i++)
	{
		if (c == accept[i])
			result = 1;
	}
	return (result);
}
