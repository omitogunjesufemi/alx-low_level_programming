#include "search_algos.h"

int min_value(int a, int b);
void print_array(int *array, size_t start, size_t end);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high, m;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while ((i < size) && (array[i] < value))
	{
		printf("Value checked array[%ld] = [%d]\n",
		       i, array[i]);
		i = i * 2;
	}

	low = i / 2;
	high = min_value(i + 1, size) - 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
	       low, high);
	while (low <= high)
	{
		print_array(array, low, high);
		m = (low + high) / 2;
		if (array[m] < value)
			low = m + 1;
		else if (array[m] > value)
			high = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * min_value - Gets the minimum value of two integers
 * @a: First int
 * @b: Second int
 * Return: Minimum value
 */
int min_value(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
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
