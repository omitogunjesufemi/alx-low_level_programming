#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - main method
 * @argc: argument count
 * @argv: arguments from terminal
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int (*calculator)(int, int);
	char *operator;
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);

	calculator = get_op_func(operator);

	if (!calculator || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator[0] - '/' == 0 || operator[0] - '%' == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = calculator(a, b);

	printf("%d\n", result);

	return (0);
}
