#include "main.h"

/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: rows of the array
 * @height: columns of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(width * sizeof(int));

		free(*(ptr + i));
		if (*(ptr + i) == NULL)
		{
			free(*(ptr + i));
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(ptr + i) + j) = 0;
		}
	}

	return (ptr);
}
