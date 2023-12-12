#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: first index where value is located
 * If value is not present or array is NULL return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if ((pos > high) || (pos < low))
		{
			printf("Value checked array[%ld] is out of range\n",
			       pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	return (-1);
}
