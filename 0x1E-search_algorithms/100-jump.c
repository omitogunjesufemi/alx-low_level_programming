#include <math.h>
#include "search_algos.h"

int min_value(int a, int b);

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
int jump_search(int *array, size_t size, int value)
{
	size_t start, end;

	if (array == NULL)
		return (-1);

	start = 0;
	end = (size_t) sqrt(size);
	while (array[min_value(end, size)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       start, array[start]);
		start = end;
		end = end + ((size_t) sqrt(size));

		if (start >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       start, end);
			return (-1);
		}
	}

	printf("Value checked array[%ld] = [%d]\n",
	       start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n",
	       start, end);
	while (array[start] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       start, array[start]);
		if (array[start] == value)
		{
			return (start);
		}
		start++;
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
