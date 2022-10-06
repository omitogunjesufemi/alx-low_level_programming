#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: largest number in the array
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int range, i, j;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = min; i < range; i++, j++)
	{
		ptr[i] = j;
	}

	return (ptr);
}
