#include "hash_tables.h"

/**
 * hash_table_create - Creates a Hash Table
 * @size: This is the size of the Hash Table
 * Return: hash_table object
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
