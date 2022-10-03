#include "main.h"

/**
 * str_concat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, total_len;
	int i;

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;
	ptr = malloc(1 + total_len * sizeof(char));

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		ptr[i + len1] = s2[i];

	return (ptr);
}
