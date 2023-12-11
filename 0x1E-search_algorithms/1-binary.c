#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);

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
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

/**
 * print_array - Prints array with a particular start and end
 * @array: Pointer to array to print
 * @start: Beginning of array
 * @end: Last point of array
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		if (start == end)
			printf("%d\n", array[start]);
		else
			printf("%d, ", array[start]);
	}
}
