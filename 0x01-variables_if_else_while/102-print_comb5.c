#include <stdio.h>

/**
 * main - Main method
 * Return: 0
 */
int main(void)
{
	int i = 48, j = 48;
	int k, l, currentj, prevj;

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
					if (!((i == 57) && (j == 56) && (k == 57) && (l == 57)))
					{
						putchar(',');
						putchar(' ');
					}

					l++;
					prevj = currentj;
				}
				k++;
			}
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
