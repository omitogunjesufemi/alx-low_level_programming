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

	if (ac == 0)
		return (NULL);

	for (i = 1; i < ac; i++)
		total_len += strlen(av[i]);

	ptr = malloc((total_len - ac - 2));

	free(ptr);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}
	return (ptr);
}
