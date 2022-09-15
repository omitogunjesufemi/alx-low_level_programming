#include "main.h"

void print_last_digit(int a);
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
				print_last_digit(i);
			}
			else
			{
				print_last_digit(i);
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

/**
 * print_last_digit - print last digit
 * @a: int
 */
void print_last_digit(int a)
{
	_putchar((a % 10) + '0');
}
