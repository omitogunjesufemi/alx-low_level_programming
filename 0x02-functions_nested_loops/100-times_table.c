#include "main.h"

int number_of_digits(int num);
void three_space_one_digit(int result);
void two_space_two_digit(int result);
void one_space_three_digit(int temp, int result);

/**
 * print_times_table - print the n times table, starting with 0
 * @n: n-times table
 */
void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result = i * j;
				int num_of_digits = number_of_digits(result);

				if ((num_of_digits == 1) || (num_of_digits == 0))
				{
					if (j == 0)
					{
						_putchar((result % 10) + '0');
						_putchar(',');
					}
					else if (j == n)
					{
						three_space_one_digit(result);
					}
					else
					{
						three_space_one_digit(result);
						_putchar(',');
					}
				}
				else if (num_of_digits == 2)
				{
					if (j == n)
					{
						two_space_two_digit(result);
					}
					else
					{
						two_space_two_digit(result);
						_putchar(',');
					}
				}
				else if (num_of_digits == 3)
				{
					int temp = (result / 10);

					if (j == n)
					{
						one_space_three_digit(temp, result);
					}
					else
					{
						one_space_three_digit(temp, result);
						_putchar(',');
					}
				}
			}
			_putchar('\n');
		}
	}
}



/**
 * three_space_one_digit - times table arrangement
 * @result: multiplication output
 */
void three_space_one_digit(int result)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar((result % 10) + '0');
}

/**
 * two_space_two_digit - times table arrangement
 * @result: multiplication output
 */
void two_space_two_digit(int result)
{
	_putchar(' ');
	_putchar(' ');
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
}

/**
 * one_space_three_digit - times table arrangement
 * @tmp: multiplication output
 */
void one_space_three_digit(int temp, int result)
{
	_putchar(' ');
	_putchar((temp / 10) + '0');
	_putchar((temp % 10) + '0');
	_putchar((result % 10) + '0');
}


/**
 * number_of_digits - gets the length of a number
 * @num: the number to be computed
 * Return: int
 */

int number_of_digits(int num)
{
	int count = 0;

	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
