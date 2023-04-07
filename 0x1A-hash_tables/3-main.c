#include "hash_tables.h"

/**
 * main - Entry point of the program
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%d\n", hash_table_set(ht, "betty", "cool"));
	printf("%d\n", hash_table_set(ht, NULL, "cool"));
	printf("%d\n", hash_table_set(ht, "", "cool"));
	printf("%d\n", hash_table_set(NULL, "", "cool"));

	return (EXIT_SUCCESS);
}
