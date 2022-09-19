#include "main.h"

int str_len(char *m);
/**
 * rev_string - a string in reverse
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int len = str_len(s);
	int j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		char p = s[i];

		s[i] = s[j - i];
		s[j - i] = p;
	}
}

/**
 * str_len - get length of string
 * @m: string
 * Return: length of string
 */
int str_len(char *m)
{
	int i = 0;

	while (m[i] != '\0')
	{
		i++;
	}
	return (i);
}
