#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char leet_l[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char leet_n[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet_l[j])
			{
				s[i] = leet_n[j];
			}
		}
	}
	return (s);
}
