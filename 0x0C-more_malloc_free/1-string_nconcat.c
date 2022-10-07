#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to copy from second string
 * Return: a pointer to the null-terminanted concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_1, len_2, total_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = strlen(s1);
	len_2 = strlen(s2);
	if (n >= len_2)
		n = len_2;

	total_len = len_1 + n;
	ptr = malloc((1 + total_len) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < total_len)
	{
		while (i < len_1)
		{
			ptr[i] = s1[i];
			i++;
		}

		while (j < n)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}

		ptr[i] = '\0';
	}

	return (ptr);
}
