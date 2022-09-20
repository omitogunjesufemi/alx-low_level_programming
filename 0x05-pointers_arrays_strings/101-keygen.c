#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generating a random valid password
 * Return: int
 */
int main(void)
{
	int num, i, total;

	srand(time(NULL));
	for (i = 0, total = 2772; total > 122; i++)
	{
		num = (rand() % 125) + 1;
		printf("%c", num);
		total -= num;
	}
	printf("%c", total);
	return (0);
}
