#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the memory to reallocate
 * @old_size: the old size of the memory
 * @new_size: the new size of memory to reallocate
 * Return: a pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;

	if (new_size == old_size)
		return (ptr);

	pointer = malloc(new_size);

	if (ptr == NULL)
	{
		free(ptr);
		return (malloc(new_size));
	}

	if (new_size ==  0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/*strcpy(pointer, ptr);*/
	/*pointer = ptr;*/
	free(ptr);

	return (pointer);
}
