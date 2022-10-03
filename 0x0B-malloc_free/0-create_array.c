#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * with a specific character
 * @size: size of array
 * @c: the specific character
 * Return: pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
