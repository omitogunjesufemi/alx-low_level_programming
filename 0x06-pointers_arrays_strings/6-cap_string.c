int check_separator(char sep);
/**
 * cap_string - capitalize all words of a string
 * @s: string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, separator1, separator2;

	for (i = 0; s[i] != '\0'; i++)
	{
		separator1 = check_separator(s[i]);
		separator2 = check_separator(s[i + 1]);
		if (separator1)
		{
			if ((s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		else if (separator1 == 1 && separator2 == 1)
		{
			if ((s[i + 2] >= 'a' && s[i + 2] <= 'z'))
			{
				s[i + 2] = s[i + 2] - 32;
			}
		}
	}
	return (s);
}

/**
 * check_separator - check for separator
 * @sep: string to check
 * Return: int
 */
int check_separator(char sep)
{
	int i;
	char separator[] = {9, 10, 11, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; i < 14; i++)
	{
		if (sep == separator[i])
		{
			return (1);
		}
	}
	return (0);
}
