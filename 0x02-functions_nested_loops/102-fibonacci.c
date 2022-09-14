#include <stdio.h>

/**
 * main - main method
 * Return: int
 */
int main(void)
{
	long int f0 = 0, f1 = 1;
	int i;

	for (i = 0; i < 50; i++)
	{
		long int temp = f1;

		f1 = f1 + f0;
		if (i == 49)
			printf("%ld\n", f1);
		else
			printf("%ld, ", f1);
		f0 = temp;
	}
	return (0);
}
