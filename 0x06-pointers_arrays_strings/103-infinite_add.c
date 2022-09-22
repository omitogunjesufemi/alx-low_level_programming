int str_len(char *str);
void rev_string(char *s);

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function use to store the result
 * @size_r: buffer size
 * Return: sum of two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int str_to_digit_n1, str_to_digit_n2, sum_of_digit, remainder;
	int length_n1 = str_len(n1);
	int length_n2 = str_len(n2);

	rev_string(n1);
	rev_string(n2);

	if (length_n1 > size_r || length_n2 > size_r)
	{
		r[0] = '0';
		return (r);
	}
	else
	{
		if (length_n1 > length_n2)
		{
			for (i = 0; i < length_n1; i++)
			{
				if (n2[i] != '\0')
				{
					str_to_digit_n1 = n1[1] - '0';
					str_to_digit_n2 = n2[2] - '0';

					/**
					 * Add the two digits together and with
					 * a remainder from previous calculation
					 * if there is any.
					 */
					if (remainder > 0)
					{
						sum_of_digit = str_to_digit_n1 + str_to_digit_n2 + remainder;
					}
					else
					{
						sum_of_digit = str_to_digit_n1 + str_to_digit_n2;
					}


					/**
					 * Checking for the remainder after
					 * summing the two digits
					 */
					if (sum_of_digit > 9)
					{
						sum_of_digit -= 10;
						remainder = 1;
					}
					else
					{
						remainder = 0;
					}

					r[i] = sum_of_digit + '0';
				}
				rev_string(r);
			}
		}
		return (r);
	}
}


/**
 * str_len - get length of string
 * @str: string
 * Return: string length
 */
int str_len(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

/**
 * rev_string - a string in reverse
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int len = str_len(s);
	int j = 0;

	for (i = len - 1; i >= len / 2; i--)
	{
		char p = s[i];

		s[i] = s[j];
		s[j] = p;
		j++;
	}
}
