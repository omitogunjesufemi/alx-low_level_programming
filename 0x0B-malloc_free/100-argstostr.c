#include "main.h"

/**
 * argstostr - concatenates arguments to string
 * @ac: argument count
 * @av: arguments
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_len;
	char *ptr;

	k = 0;

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
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			ptr[k] = *(*(av + i) + j);
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
