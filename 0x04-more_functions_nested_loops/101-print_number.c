#include "main.h"

int length_digit(int digit);
int exponential(int digit, int power);
/**
 * print_number - This prints the value of an integer
 * @n: value to be printed
 */
void print_number(int n)
{
	if (n > 9 || n < 0)
	{
		int length = length_digit(n);
		int i;

		for (i = 1; i <= length; i++)
		{
			int last_digit = n % 10;

			n = n / 10;
			_putchar(last_digit + '0');
		}
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * length_digit - This returns the length of a digit
 * @digit: digit to be checked
 * Return: int
 */
int length_digit(int digit)
{
	int result = 0;

	while (digit != 0)
	{
		digit = digit / 10;
		result++;
	}
	return (result);
}

/**
 * exponential - This returns the exponential of a digit
 * @digit: digit to be checked
 * @power: power
 * Return: int
 */
int exponential(int digit, int power)
{
	int i;
	int result = 1;

	for (i = 0; i < power; i++)
	{
		result = result * digit;
	}
	return (result);
}
