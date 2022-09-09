#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *main - Main method
 * Return: int 0
 */
int main (void)
{
	char a = 'a';

	while ( a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
