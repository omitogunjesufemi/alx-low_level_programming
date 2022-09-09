#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main method
 * Return: int 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (!(a == 'q' || a == 'e'))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
