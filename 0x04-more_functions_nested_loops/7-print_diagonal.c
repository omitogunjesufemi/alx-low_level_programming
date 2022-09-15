#include "main.h"

void print_spaces(int a);
/**
 * print_line - This draws a straight line in the terminal
 * @n: int
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			print_spaces(i);
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_spaces - print space depending on an integer
 * @a: number of times to print
 */
void print_spaces(int a)
{
	while (a != 1)
	{
		_putchar(' ');
		a--;
	}
}
