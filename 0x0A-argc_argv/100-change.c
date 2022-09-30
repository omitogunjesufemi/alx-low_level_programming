#include <stdio.h>
#include <stdlib.h>

int recursive_change(int change, int value);

/**
 * main - method
 * @argc: arguments count
 * @argv: arguments
 * Return: 1
 */
int main(int argc, char **argv)
{
	int min_coin, value;
	int change_value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change_value = atoi(*(argv + 1));

	value = 0;

	min_coin = recursive_change(change_value, value);

	printf("%d\n", min_coin);

	return (0);
}

/**
 * recursive_change - recursive change
 * @change: change value
 * @value: the recursive number of coins
 * Return: number of coins
 */
int recursive_change(int change, int value)
{
	int i;
	int cent_array[5] = {25, 10, 5, 2, 1};
	int array_value = 0;

	if (change <= 0)
	{
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (change / cent_array[i] >= 1)
		{
			value = change / cent_array[i];
			array_value = cent_array[i];
			break;
		}
	}

	change = change - (value * array_value);

	return (value + recursive_change(change, value));
}
