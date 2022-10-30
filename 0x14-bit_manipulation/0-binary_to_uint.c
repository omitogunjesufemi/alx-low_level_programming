#include "main.h"

int str_len(const char *s);

unsigned int power_of_two(int y);

int zero_one_check(const char *c);

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: a pointer to binary strings of 0 and 1 chars
 * Return: the decimal representation of the binary string
 * 0, if there is one or more chars in the string that is not
 * 0 or 1, and when the string is a NULL string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, bit_value;
	int i, len;

	if (b != NULL)
	{
		if (zero_one_check(b))
		{
			i = 0;
			uint = 0;
			len = str_len(b);
			while (b[i] != '\0')
			{
				bit_value = (b[i] - '0') * power_of_two(len - i - 1);
				uint = uint + bit_value;
				i++;
			}
			return (uint);
		}
	}
	return (0);
}

/**
 * str_len - Gets length of a string
 * @s: string
 * Return: length of a string
 */
int str_len(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * power_of_two - Gives the value of 2 raised to a particular value
 * @y: the power
 * Return: the power of two
 */
unsigned int power_of_two(int y)
{
	if (y == 0)
		return (1);
	return (2 * power(y - 1));
}

/**
 * zero_one_check - Checks for only 0's and 1's are in the string
 * @c: string
 * Return: 1 for true, 0 if false
 */
int zero_one_check(const char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '0' || c[i] == '1')
			i++;
		else
			return (0);
	}

	return (1);
}
