#include "main.h"

void *_memset(void *s, int b, unsigned int n);

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the size of the type of elements in memory
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	ptr = _memset(ptr, 0, nmemb);

	return (ptr);
}

/**
 * _memset - a function that fills memory with a constant byte
 * @s: the memory area pointer
 * @b: the constant byte
 * @n: the number of bytes to fill the memory area
 * Return: the string s
 */
void *_memset(void *s, int b, unsigned int n)
{
	char *p;
	unsigned int i;

	p = s;
	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (s);
}
