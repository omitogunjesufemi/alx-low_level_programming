#include <stdio.h>

/**
 * main - main method
 * Return: int
 */
int main(void)
{
	long int f0 = 0, f1 = 1, sum = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		long int temp = f1;

		f1 = f1 + f0;
		if (f1 <= 4000000)
		{
			if (f1 % 2 == 0)
				sum = sum + f1;
		}
		f0 = temp;
	}
	printf("%ld\n", sum);
	return (0);
}
