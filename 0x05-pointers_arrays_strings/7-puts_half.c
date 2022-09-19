#include "main.h"

int str_len(char *s);
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, len;

	len = str_len(str);
	if (len % 2 == 0)
	{
		i = len / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		i = (len - 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}

/**
 * str_len - the length of a string
 * @s: string
 * Return: int
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
