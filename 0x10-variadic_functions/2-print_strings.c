#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: strings to be printed between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_arg;
	unsigned int i;

	va_start(str_arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(str_arg, char *));

		if ((i != n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");
}
