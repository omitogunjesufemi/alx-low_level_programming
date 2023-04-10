#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    printf("%p\n", (void *)ht);
    shash_table_delete(ht);

    ht = shash_table_create("1024");
    printf("%p\n", (void *)ht);
    shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
