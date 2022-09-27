#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the square matrix
 * @size: size of the matrix [row][col]
 */
void print_diagsums(int *a, int size)
{
	int i, total_size;
	int factor_first_diagonal, factor_second_diagonal;
	int *ptr;
	long int first_diagonal_sum, second_diagonal_sum;

	ptr = a;
	total_size = size * size;
	first_diagonal_sum = 0;
	second_diagonal_sum = 0;
	factor_first_diagonal = size + 1;
	factor_second_diagonal = size - 1;

	for (i = 0; i < total_size; i++)
	{
		if (i % factor_first_diagonal == 0)
		{
			first_diagonal_sum += *(ptr + i);
		}

		if (i % factor_second_diagonal == 0 && i != 0 && i != total_size - 1)
		{
			second_diagonal_sum += *(ptr + i);
		}
	}
	printf("%ld, %ld\n", first_diagonal_sum, second_diagonal_sum);
}
