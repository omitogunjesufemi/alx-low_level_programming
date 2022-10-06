#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to copy from second string
 * Return: a pointer to the null-terminanted concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the size of the type of elements in memory
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: largest number in the array
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max);

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the memory to reallocate
 * @old_size: the old size of the memory
 * @new_size: the new size of memory to reallocate
 * Return: a pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
