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
	int str_to_digit_n1, str_to_digit_n2, sum_of_digit;
	char digit_to_str;
	int remainder = 0;
	int count_n1 = 0;
	int count_n2 = 0;
	int count_r = 0;
	int length_n1 = str_len(n1);
	int length_n2 = str_len(n2);

	rev_string(n1);
	rev_string(n2);

	if (length_n1 >= size_r || length_n2 >= size_r)
	{
		return (0);
	}

	/**
	 * For as long as there is a remainder,
	 * and the length of either strings are yet to be reached
	 */
	while (count_n1 < length_n1 || count_n2 < length_n2 || remainder == 1)
	{
		/**
		 * Use zero for addition once
		 * the length has been reached
		 */
		if (count_n1 >= length_n1)
		{
			str_to_digit_n1 = 0;
		}
		else
		{
			str_to_digit_n1 = n1[count_n1] - '0';
		}

		if (count_n2 >= length_n2)
		{
			str_to_digit_n2 = 0;
		}
		else
		{
			str_to_digit_n2 = n2[count_n2] - '0';
		}

		/**
		 * Adding the str_to_digit together
		 */
		sum_of_digit = str_to_digit_n1 + str_to_digit_n2 + remainder;
		/**
		 * Checking for remainder
		 */
		if (sum_of_digit > 9)
		{
			sum_of_digit = sum_of_digit - 10;
			remainder = 1;
		}
		else
		{
			remainder = 0;
		}

		digit_to_str = sum_of_digit + '0';
		r[count_r] = digit_to_str;

		count_n1++;
		count_n2++;
		count_r++;
	}
	rev_string(r);
	return (r);
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
