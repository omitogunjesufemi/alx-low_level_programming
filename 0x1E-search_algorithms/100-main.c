#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 23, 47, 89, 160
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 0, jump_search(array, size, 0));
	printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
	printf("Found %d at index: %d\n\n", 5, jump_search(array, size, 5));
	printf("Found %d at index: %d\n\n", 3, jump_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 8, jump_search(array, size, 8));
	printf("Found %d at index: %d\n\n", 9, jump_search(array, size, 9));
	printf("Found at index: %d\n", jump_search(array, 15, 123456789));
	printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
	return (EXIT_SUCCESS);
}
