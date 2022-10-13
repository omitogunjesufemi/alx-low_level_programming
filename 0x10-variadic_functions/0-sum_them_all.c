#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: reference parameter
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_arg;
	unsigned int sum = 0;
	unsigned int i;

	if (n <= 0)
		return (0);

	va_start(sum_arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sum_arg, int);
	}

	return (sum);
}
