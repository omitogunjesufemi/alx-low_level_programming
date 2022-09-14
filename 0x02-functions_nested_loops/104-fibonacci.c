#include <stdio.h>

/**
 * main - main method
 * Return: int
 */
int main(void)
{
	unsigned long int f0 = 0, f1 = 1;
	int i;

	for (i = 0; i < 99; i++)
	{
		unsigned long int temp = f1;

		f1 = f1 + f0;
		if (i == 98)
			printf("%lu\n", f1);
		else
			printf("%lu, ", f1);
		f0 = temp;
	}
	return (0);
}
