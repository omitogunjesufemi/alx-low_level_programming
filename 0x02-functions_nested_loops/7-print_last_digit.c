#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: character to be computed
 * Return: int
 */
int print_last_digit(int i)
{
	int last;

	if (i < 0)
	{
		int j = (i % 10) * -1;

		last = '0' + j;
		_putchar(last);
		return (j);
	}
	else
	{
		last = '0' + (i % 10);
		_putchar(last);
		return (i % 10);
	}
}
