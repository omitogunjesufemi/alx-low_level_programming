#include "main.h"

/**
 * _atoi - converting string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int i, number;
	int sign;

	sign = 1;
	number = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = (s[i] - '0') + (number * 10);

			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	return (number * sign);
}
