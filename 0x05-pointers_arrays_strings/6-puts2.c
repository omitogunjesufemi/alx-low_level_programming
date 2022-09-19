#include "main.h"

int str_len(char *s);
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i, len;

	len = str_len(str);
	for (i = 0; i <= len - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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
