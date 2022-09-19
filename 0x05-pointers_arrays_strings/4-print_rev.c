#include "main.h"
#include <stdio.h>

int str_len(char *n);
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int length = str_len(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * str_len - get string length
 * @n: string
 * Return: int
 */
int str_len(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		i++;
	}
	return (i);
}
