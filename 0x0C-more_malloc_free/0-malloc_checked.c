#include "main.h"

/**
 * malloc_checked - it allocates memory using malloc
 * @b: the size of memory to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
