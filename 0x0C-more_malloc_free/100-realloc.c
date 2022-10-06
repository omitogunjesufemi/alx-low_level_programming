#include "main.h"

void *_memcpy(void *dest, void *src, unsigned int n);
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the memory to reallocate
 * @old_size: the old size of the memory
 * @new_size: the new size of memory to reallocate
 * Return: a pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;
	unsigned int max;

	if (new_size == old_size)
		return (ptr);

	new_pointer = malloc(new_size);

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

	if (new_size > old_size)
		max = old_size;

	_memcpy(new_pointer, ptr, max);
	free(ptr);

	return (new_pointer);
}

/**
 * _memcpy - a function that fills memory with a constant byte
 * @dest: the memory area pointer
 * @src: memeory area to copy from
 * @n: the number of bytes to fill the memory area
 * Return: char dest
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{
	char *d;
	char *s;
	unsigned int i;

	d = dest;
	s = src;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}

	return (dest);
}
