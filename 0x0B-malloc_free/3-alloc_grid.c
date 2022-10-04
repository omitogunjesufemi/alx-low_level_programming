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
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(width * sizeof(int));

		if (*(ptr + i) == NULL)
		{
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

	for (i = 0; i < height; i++)
	{
		free(ptr[i]);
		ptr[i] = NULL;
	}

	free(NULL);
	ptr = NULL;
	return (ptr);
}
