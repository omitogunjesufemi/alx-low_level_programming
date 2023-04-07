#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 * The hash is printed in the order they appear in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, total_node, count;
	hash_node_t *node;

	if (ht == NULL)
	{
		printf("{");
		printf("}\n");
	}
	else
	{
		printf("{");
		total_node = 0;
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node != NULL)
				total_node++;
		}

		count = 0;
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node != NULL)
			{
				printf("'%s' : '%s'", node->key, node->value);
				count++;
				if (count < total_node)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
