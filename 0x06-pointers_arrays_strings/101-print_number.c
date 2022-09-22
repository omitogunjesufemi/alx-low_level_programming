#include "main.h"
int multiplier(int m);
int length(int l);
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int i, len, multiple, last_digit;

	len = length(n);
	if (n > 9 || n < 0)
	{
		multiple = multiplier(len);
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		for (i = 0; i < len; i++)
		{
			last_digit = ((n / multiple) % 10) + '0';
			_putchar(last_digit);
			multiple = multiple / 10;
		}
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * multiplier - multiples of 10
 * @m: length of digit
 * Return: multiple of 10
 */
int multiplier(int m)
{
	int i = 1;
	int result = 1;

	while (i < m)
	{
		result = result * 10;
		i++;
	}
	return (result);
}

/**
 * length - length of digit
 * @l: digit
 * Return: length of digit
 */
int length(int l)
{
	int count = 0;

	if (l < 0)
	{
		l = l * -1;
	}
	while (l != 0)
	{
		l = l / 10;
		count++;
	}
	return (count);
}
