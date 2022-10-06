#include "main.h"
#include <stdio.h>

long int string_to_integer(char *s, unsigned int long length);
unsigned int long power_of_10(unsigned int long n);
int not_digit(char *s);
unsigned int long str_len(char *s);
void print_string(char *s);
int length_digit(int digit);
int exponential(int power);
void print_int(long int n);

/**
 * main - main method
 * @argc: argument count
 * @argv: arguments
 * Return: always 1
 */
int main(int argc, char **argv)
{
	char *s1;
	char *s2;
	long int value1;
	long int value2;

	unsigned int long len1;
	unsigned int long len2;

	if (argc != 3)
	{
		print_string("Error");
		exit(98);
	}

	s1 = argv[1];
	s2 = argv[2];

	if (not_digit(s1) == 1 || not_digit(s2) == 1)
	{
		print_string("Error");
		exit(98);
	}

	len1 = str_len(s1);
	len2 = str_len(s2);
	value1 = string_to_integer(s1, len1);
	value2 = string_to_integer(s2, len2);

	print_int(value1 * value2);
	_putchar('\n');

	return (0);
}

/**
 * print_string - prints strings
 * @s: string
 */
void print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * string_to_integer - converts strings to integer
 * @s: string
 * @length: length of string
 * Return: the integer value
 */
long int string_to_integer(char *s, unsigned int long length)
{
	unsigned int long i, power;
	int normal_value;
	long int sum;

	sum = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		power = length - i - 1;
		normal_value = ((s[i] - 48) * power_of_10(power));
		sum = sum + normal_value;
	}

	return (sum);
}

/**
 * not_digit - checking if there is a non-digit in the string
 * @s: the string to check
 * Return: 1 if there is a non-digit, 0 if there is none
 */
int not_digit(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
	}

	return (0);
}

/**
 * power_of_10 - recursively gets the value of 10 raise to n
 * @n: the power that 10 is raised to
 * Return: the value of the raised power
 */
unsigned int long power_of_10(unsigned int long n)
{
	if (n <= 0)
		return (1);
	return (10 * power_of_10(n - 1));
}

/**
 * str_len - gets the length of a string
 * @s: the string
 * Return: length of the string
 */
unsigned int long str_len(char *s)
{
	unsigned int long i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * print_int - This prints the value of an integer
 * @n: value to be printed
 */
void print_int(long int n)
{
	long int num = n;
	int last_digit;

	if (num > 9 || num < 0)
	{
		int length = length_digit(n);
		int multiple = power_of_10(length - 1);
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
int length_digit(int digit)
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
