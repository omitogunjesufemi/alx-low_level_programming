#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_arg;
	unsigned int i;

	va_start(num_arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_arg, int));

		if ((i != n - 1) && separator)
			printf("%s", separator);
	}

	va_end(num_arg);

	printf("\n");
}
