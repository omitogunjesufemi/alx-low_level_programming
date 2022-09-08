#include <stdio.h>

/**
 * main - The main method
 * Return: int 1
 */
int main(void)
{
	char string1[] = "and that piece of art is useful\" - Dora Korpar, ";

	char string2[] = "2015-10-19";

	fprintf(stderr, "%s%s\n", string1, string2);
	return (1);
}
