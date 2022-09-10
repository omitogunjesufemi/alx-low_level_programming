#include <stdio.h>

/**
 * main - Main method
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			k = i;
			while (k < 58)
			{
				l = j + 1;
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		j=48;
		i++;
	}
	putchar('\n');
	return (0);
}
