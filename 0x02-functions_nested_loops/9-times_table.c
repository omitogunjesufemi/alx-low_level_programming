#include "main.h"

/**
 * two_space_one_digit - arranging the table
 * @result: result of multiplication
 */
void two_space_one_digit(int result)
{
	_putchar(' ');
	_putchar(' ');
	_putchar((result % 10) + '0');
}

/**
 * one_space_two_digit - arranging the table
 * @result: result of multiplication
 */
void one_space_two_digit(int result)
{
	_putchar(' ');
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
}
/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = (i * j);
			if (j == 0)
			{
				_putchar((result % 10) + '0');
				_putchar(',');
			}
			else if ((j == 9) && (result / 10 == 0))
			{
				two_space_one_digit(result);
			}
			else
			{
				if (result / 10 == 0)
				{
					two_space_one_digit(result);
					_putchar(',');
				}
				else if ((result / 10 != 0) && (j == 9))
				{
					one_space_two_digit(result);
				}
				else
				{
					one_space_two_digit(result);
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
