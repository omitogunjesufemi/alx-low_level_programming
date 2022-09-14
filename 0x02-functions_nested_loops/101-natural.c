#include <stdio.h>

/**
 * natural - multiples of 3 and 5
 * Return: int
 */
int natural(void)
{
	int sum = 0;
	int i;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	return (sum);
}

/**
 * main - main method
 * Return: int
 */
int main(void)
{
	long int r;

	r = natural();
	printf("%ld\n", r);
	return (0);
}
