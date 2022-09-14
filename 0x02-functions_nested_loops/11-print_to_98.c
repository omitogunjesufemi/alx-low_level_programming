#include <stdio.h>

void decreasing_counter(int count);
void increasing_counter(int count);

/**
 * print_to_98 - prints all natural number from @n to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		increasing_counter(n);
		printf("\n");
	}
	else
	{
		decreasing_counter(n);
		printf("\n");
	}
}


/**
 * decreasing_counter - counts from a number higher than 98
 * @count: the beginning of the count
 */
void decreasing_counter(int count)
{
	int i;

	for (i = count; i >= 98; i--)
	{
		if (i == 98)
			printf("%d", i);
		else
			printf("%d, ", i);
	}
}


/**
 * increasing_counter - counts from a number higher than 98
 * @count: the beginning of the count
 */
void increasing_counter(int count)
{
	int i;

	for (i = count; i <= 98; i++)
	{
		if (i == 98)
			printf("%d", i);
		else
			printf("%d, ", i);
	}
}
