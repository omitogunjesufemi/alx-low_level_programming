#include "main.h"

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

	if (str == NULL || *str == '\0' || substring_count < 1)
		return (NULL);

	ptr = malloc((1 + substring_count) * sizeof(char *));

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

		/**
		 * Where a temp is used to store substrings
		 */
		j = 0;
		while (i < str_len)
		{
			if (str[i] == ' ')
				break;

			buffer[j] = str[i];

			i++;
			j++;
		}

		/**
		 * Where the buffer is used to populate the double
		 * pointer to be returned
		 */
		if (j > 0)
		{
			buffer[j] = '\0';

			ptr[str_index] = malloc((1 + strlen(buffer)) * sizeof(char));

			/**
			 * Freeing the allocated memory
			 */
			if (ptr[str_index] == NULL)
			{
				for (k = 0; k < substring_count; k++)
				{
					free(ptr[k]);
				}
				free(ptr);
			}

			if (buffer != NULL || buffer != '\0')
				strcpy(ptr[str_index], buffer);

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
			{
				break;
			}
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
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
}
