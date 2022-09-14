#include <stdio.h>

/**
 * main - main method
 * Return: int
 */
int main(void)
{
	unsigned long int f0 = 0, f1 = 1, k, l;
	int i;

	for (i = 0; i < 98; i++)
	{
		unsigned long int temp = f1;

		f1 = f1 + f0;
		if ((i >= 91) && (i < 97))
		{
			k = f1 % 100000000000;
			l = f1 / 100000000000;
			printf("%lu%lu, ", l, k);
		}
		else if (i == 97)
		{
			k = f1 % 100000000000;
			l = f1 / 100000000000;
			printf("%lu%lu", l, k);
		}
		else
		{
			printf("%lu, ", f1);
		}
		f0 = temp;
	}
	return (0);
}
