#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 * @argc: arguments count
 * @argv: arguments
 * Return: 1
 */
int main(int argc, char **argv)
{
	int x, y, product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
	}
	else
	{
		x = atoi(*(argv + 1));
		y = atoi(*(argv + 2));
		product = x * y;
		printf("%d\n", product);
	}
	return (0);
}
