#include <stdio.h>
#include <math.h>

int is_prime(unsigned long long int n);
/**
 * main - main method
 * Return: 0
 */
int main(void)
{
	long long count = 0, sum = 0;
	long long n = 1200;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	if (count > 0)
	{
		long double result;
		long double a = (long double) 2;
		long double b = (long double) count;
		result = powl(a, b);

		if (sum < result)
			sum = result;
	}

	long long i;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		count = 0;
		while (n % i == 0)
		{
			count++;
			n = n / i;
		}

		if (count > 0)
		{
			long double result;
			long double a = (long double) i;
			long double b = (long double) count;
			result = powl(a, b);
			if (sum < result)
				sum = result;
		}
	}
	printf("%lld", sum);
}


/**
 * is_prime - check if prime
 * @n: value to check
 * Return: 0
 */
int is_prime(unsigned long long int n)
{
	int result = 1;

	if (n <= 1)
	{
		result = 0;
		return (result);
	}

	unsigned long long int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			result = 0;
			return (result);
		}
	}

	return (result);
}


/**
 * factorize - prime factorization
 * @n: value to factorize
 * @k: prime number
 */
