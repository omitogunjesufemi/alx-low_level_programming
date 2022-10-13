#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 * @argc: arguments count
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *) main;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%.2hhx ", ptr[i]);
		else
			printf("%.2hhx", ptr[i]);
	}
	printf("\n");

	return (0);
}
