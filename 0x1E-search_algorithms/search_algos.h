#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * using Linear Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, must return -1
 */
int linear_search(int *array, size_t size, int value);

#endif
