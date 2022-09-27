#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	char *ptr;

	ptr = *a;

	/**
	 * printf("a[0] = %c\n", *ptr);
	 * printf("a[0] = %p\n", *(a));
	 * printf("a[5] = %c\n", *(ptr+5));
	*/

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			_putchar('\n');
			_putchar(*(ptr + i));
		}
		else if (i == 63)
		{
			_putchar(*(ptr + i));
			_putchar('\n');
		}
		else
		{
			_putchar(*(ptr + i));
		}
	}
}
