#include "search_algos.h"

int re_binary(int *array, size_t low, size_t high, int value);
void print_array(int *array, size_t start, size_t end);

/**
 * advanced_binary - Binary search that return the index of the first value
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: where the index is located
 * If value is not present in array or if array is NULL, return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	return (re_binary(array, low, high, value));
}

/**
 * re_binary - Recursive Binary search helper function
 * @array: Pointer to the first element of the block of array to search in
 * @low: Lower bound
 * @high: Higer bound
 * @value: Value to search for
 */
int re_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	print_array(array, low, high);
	if (low > high)
		return (-1);
	mid = (low + high) / 2;

	if (array[mid] < value)
	{
		return (re_binary(array, mid + 1, high, value));
	}
	else if (array[mid] > value)
	{
		return (re_binary(array, low, mid - 1, value));
	}
	else
	{
		if (array[mid] == array[mid - 1])
		{
			return (re_binary(array, low, mid, value));
		}

		return (mid);
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
