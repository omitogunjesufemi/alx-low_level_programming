#include "main.h"

/**
 * argstostr - concatenates arguments to string
 * @ac: argument count
 * @av: arguments
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, total_len;
	char *ptr;

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]);

	ptr = malloc(1 + total_len * sizeof(char));

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}

	free(ptr);
	return (ptr);
}
