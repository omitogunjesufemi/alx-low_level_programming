#include <stdio.h>

/**
 * main - Main method
 * Return: 0
 */
int main(void)
{
	int i = 48;
	char a = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
