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

/**
 * binary_search - Searches for a value in an array of integers
 * using Binary Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Assuming that array will be sorted in ascending order, value will not
 * appear more than once in array
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, must return -1
 */
int binary_search(int *array, size_t size, int value);

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * Jump Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: Value to search for
 * Return: first index where value is located
 * Assuming, array is sorted in ascending order
 * If value is not present in array or array is NULL, return -1
 * The jump step is the square root of the size of the array
 */
int jump_search(int *array, size_t size, int value);


/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: first index where value is located
 * If value is not present or array is NULL return -1
 */
int interpolation_search(int *array, size_t size, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int exponential_search(int *array, size_t size, int value);

#endif
