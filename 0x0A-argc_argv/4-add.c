#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int not_digit(char *s);
/**
 * main -main method
 * @argc: arguments count
 * @argv: arguments
 * Return: 1
 */
int main(int argc, char **argv)
{
	int i, digit;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (not_digit(*(argv + i)) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				digit = atoi(*(argv + i));
				sum = sum + digit;
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * not_digit - check if it has alphabet
 * @s: string
 * Return: 1 or 0
 */
int not_digit(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (!(*(s + i) >= '0' && *(s + i) <= '9'))
			return (1);
	}

	return (0);
}
