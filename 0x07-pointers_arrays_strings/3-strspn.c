#include <stdio.h>

int item_exist(char c, char *accept);

/**
 * _strspn - a function that get the length of a prefix substring
 * @s: string to check
 * @accept: pattern to use
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int length_s, i;
	int count = 0;

	/**
	 * Get length of s and accept
	 */
	length_s = 0;

	while (s[length_s] != '\0')
	{
		length_s++;
	}

	for (i = 0; i < length_s; i++)
	{
		if (item_exist(s[i], accept))
			count++;
		else
			break;
	}

	return (count);
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
