#include <stdio.h>

/**
 * main - Main method
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j, k;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (!(i == 55 && j == 56 && k == 57))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
