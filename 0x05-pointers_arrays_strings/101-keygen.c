#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generating a random valid password
 * Return: int
 */
int main(void)
{
	char all_characters[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char generated_password[58];
	int num, i;

	srand(time(NULL));
	for (i = 0; i < 58; i++)
	{
		num = rand() % 62;
		generated_password[i] = all_characters[num];
	}
	printf("%s\n", generated_password);
	return (0);
}
