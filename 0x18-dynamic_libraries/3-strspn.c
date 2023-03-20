#include "main.h"

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
