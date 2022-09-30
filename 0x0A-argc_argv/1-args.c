#include <stdio.h>

/**
 * main - main method
 * @argc: argument count
 * @argv: arguments
 * Return: 1
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	argc--;
	printf("%d\n", argc);

	return (0);
}
