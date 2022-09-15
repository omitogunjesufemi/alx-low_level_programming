#include "main.h"

void print_hash(int n);
void print_space(int n, int size);
/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		print_space(i, size);
		print_hash(i);
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
	_putchar('\n');
}

/**
 * print_hash - prints hash
 * @n: numbers of hash
 */
void print_hash(int n)
{
	while (n > 0)
	{
		_putchar('#');
		n--;
	}
}

/**
 * print_space - prints spaces before hash
 * @n: numbers of hash
 */
void print_space(int n, int size)
{
	int count = size - n;

	while (count > 0)
	{
		_putchar(' ');
		count--;
	}
}
