#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;
    char *value;

    ht = shash_table_create(1024);
    shash_table_set(ht, "c", "fun");
    shash_table_set(ht, "python", "awesome");
    shash_table_set(ht, "Bob", "and Kris love asm");
    shash_table_set(ht, "N", "queens");
    shash_table_set(ht, "Asterix", "Obelix");
    shash_table_set(ht, "Betty", "Cool");
    shash_table_set(ht, "98", "Battery Street");
    shash_table_set(ht, "c", "isfun");

    value = shash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = shash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = shash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = shash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = shash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = shash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = shash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = shash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);

    shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
