#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 * The hash is printed in the order they appear in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, total_node, count;
	hash_node_t *node, *temp;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		printf("{");
		total_node = node_total(ht);
		count = 0;
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node != NULL)
			{
				if (node->next == NULL)
				{
					print_node(node, count, total_node);
				}
				else
				{
					temp = node;
					while (temp != NULL)
					{
						print_node(temp, count, total_node);
						temp = temp->next;
					}
				}
			}
		}
		printf("}\n");
	}
}


/**
 * node_total - Get total allocated node
 * @ht: Hash table
 * Return: total allocated spaces
 */
unsigned long int node_total(const hash_table_t *ht)
{
	unsigned long int i, total_node;
	hash_node_t *node;

	total_node = 0;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
			total_node++;
	}

	return (total_node);
}

/**
 * print_node - Print a particular node
 * @node: Hash Node
 * @count: count
 * @total: Total space allocated
 * Return: count
 */
unsigned long int print_node(hash_node_t *node, unsigned long int count,
			     unsigned long int total)
{
	printf("'%s': '%s'", node->key, node->value);
	count++;
	if (count < total)
		printf(", ");

	return (count);
}
