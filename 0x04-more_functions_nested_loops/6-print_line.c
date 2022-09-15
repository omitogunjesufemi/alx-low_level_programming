#include "main.h"

/**
 * print_line - This draws a straight line in the terminal
 * @n: int
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
