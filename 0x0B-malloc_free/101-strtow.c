#include "main.h"
#include <stdio.h>

int sub_count(char *str);
void _strcpy(char *dest, char *src);
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	char **ptr;
	int i, j, k, substring_count, str_len, str_index;
	char buffer[16284];

	i = 0;
	substring_count = sub_count(str);
	str_len = strlen(str);

	ptr = malloc(substring_count * sizeof(char *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	str_index = 0;
	while (i < str_len)
	{
		while (i < str_len)
		{
			if (str[i] != ' ')
				break;
			i++;
		}

		j = 0;
		while (i < str_len)
		{
			if (str[i] == ' ')
				break;

			buffer[j] = str[i];

			i++;
			j++;
		}

		if (j > 0)
		{
			buffer[j] = '\0';

			ptr[str_index] = malloc(1 + strlen(buffer) * sizeof(char));

			if (ptr[str_index] == NULL)
			{
				for (k = 0; k < substring_count; k++)
				{
					free(ptr[str_index]);
				}
				free(ptr);
			}

			_strcpy(ptr[str_index], buffer);

			str_index++;
		}
	}

	return (ptr);
}

/**
 * sub_count - count the number of substring
 * @str: string
 * Return: substring character
 */
int sub_count(char *str)
{
	int prev_i;
	int i = 0;
	int count = 0;
	int str_len = strlen(str);

	while (i < str_len)
	{
		while (i < str_len)
		{
			if (str[i] != ' ')
				break;
			i++;
		}

		prev_i = i;
		while (i < str_len)
		{
			if (str[i] == ' ')
				break;
			i++;
		}

		if (i > prev_i)
			count++;
	}

	return (count);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 */
void _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
}
