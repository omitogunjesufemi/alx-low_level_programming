#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: character to be computed
 * Return: int
 */
int print_last_digit(int i)
{
	int last, j;

	if (i < 0)
	{
		j = i * -1;
		last = '0' + (j % 10);
		_putchar(last);
		return (j % 10);
	}
	else
	{
		last = '0' + (i % 10);
		_putchar(last);
		return (i % 10);
	}
}
