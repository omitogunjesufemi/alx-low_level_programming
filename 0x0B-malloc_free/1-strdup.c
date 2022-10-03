#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * @str: string given as parameter
 * Return: pointer to the duplicate of the string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(strlen(str) * sizeof(*str));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
