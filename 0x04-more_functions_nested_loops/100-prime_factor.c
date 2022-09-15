#include <stdio.h>
#include <math.h>

int is_prime(long int n);
/**
 * main - main method
 * Return: 0
 */
int main(void)
{
	long int i;
	long int test_value = 2081;

	while (test_value > 1)
	{
		for (i = 0; i < 45; i++)
		{
			if (is_prime(i) == 1)
			{
				if (test_value % i == 0)
				{
					printf("%ld, ", i);
					test_value  = test_value / i;
					break;
				}
			}
		}
	}
}


/**
 * is_prime - check if prime
 * @n: value to check
 * Return: 0
 */
int is_prime(long int n)
{
	int result = 1;

	if (n <= 1)
	{
		result = 0;
		return (result);
	}

	int i;

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
