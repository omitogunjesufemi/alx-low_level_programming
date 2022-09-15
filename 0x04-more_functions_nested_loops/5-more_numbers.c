#include "main.h"

int digit_length(int a);
/**
 * more_numbers - prints 0 to 9, 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (digit_length(i) > 1)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

/**
 * digit_length - return length of digit
 * @a: int
 * Return: int
 */
int digit_length(int a)
{
	int count = 0;

	while (a != 0)
	{
		a = a / 10;
		count++;
	}
	return (count);
}
