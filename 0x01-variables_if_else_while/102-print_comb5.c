#include <stdio.h>

/**
 * main - Main method
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k, l;
	int currentj, prevj;

	while (i < 58)
	{
		while (j < 58)
		{
			currentj = j;
			k = i;
			while (k < 58)
			{
				if (currentj != prevj)
					l = j + 1;
				else
					l = 48;
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
					prevj = currentj;
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
