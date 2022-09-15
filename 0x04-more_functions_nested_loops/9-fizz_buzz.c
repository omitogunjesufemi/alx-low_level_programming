#include <stdio.h>

/**
 * main - main method
 * Return: int
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			char c[] = "FizzBuzz";

			printf("%s ", c);
		}
		else if (i % 3 == 0)
		{
			char c[] = "Fizz";

			printf("%s ", c);
		}
		else if (i % 5 == 0)
		{
			char c[] = "Buzz";

			if (i == 100)
				printf("%s\n", c);
			else
				printf("%s ", c);
		}
		else
		{
			printf("%d ", i);
		}
	}
}
