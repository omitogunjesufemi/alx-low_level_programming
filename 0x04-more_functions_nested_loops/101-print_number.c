#include "main.h"

int length_digit(long digit);
long exponential(int power);
/**
 * print_number - This prints the value of an integer
 * @n: value to be printed
 */
void print_number(int n)
{
	long num = n;
	int last_digit;

	if (num > 9 || num < 0)
	{
		int length = length_digit(n);
		long multiple = exponential(length);
		int i;

		if (num < 0)
		{
			_putchar('-');
			num =  num * -1;
		}

		for (i = 0; i < length; i++)
		{
			last_digit = (num / multiple) % 10;
			_putchar(last_digit + '0');
			multiple = multiple / 10;
		}
	}
	else
	{
		_putchar(num + '0');
	}
}

/**
 * length_digit - This returns the length of a digit
 * @digit: digit to be checked
 * Return: int
 */
int length_digit(long digit)
{
	int result = 0;

	if (digit < 0)
	{
		digit *= -1;
	}

	while (digit != 0)
	{
		digit = digit / 10;
		result++;
	}
	return (result);
}

/**
 * exponential - This returns the value of 10 raise to a power
 * @power: power
 * Return: int
 */
long exponential(int power)
{
	int i = 1;
	long result = 1;

	while (i < power)
	{
		result = result * 10;
		i++;
	}
	return (result);
}
