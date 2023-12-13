#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


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

/**
 * advanced_binary - Binary search that return the index of the first value
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: where the index is located
 * If value is not present in array or if array is NULL, return -1
 */
int advanced_binary(int *array, size_t size, int value);

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump
 * search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 * Return: Pointer to the first node where the value is located
 * If value is not present in head or if head is NULL, return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on the first node where value is located
 * If value is not present in list or if head is NULL, return NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
