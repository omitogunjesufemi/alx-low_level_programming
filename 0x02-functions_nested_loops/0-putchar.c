#include <stdio.h>
#include "main.h"

/**
 * main - main method
 * Return: int 0
 */
int main(void)
{
	int i = 0;
	char c[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
