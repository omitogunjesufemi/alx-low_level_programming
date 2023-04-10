#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	shash_table_set(ht, "betty", "cool");
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
