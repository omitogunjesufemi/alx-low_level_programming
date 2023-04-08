#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			free_node(&node);
		}

	}
	free(ht->array);
	free(ht);
}

/**
 * free_node - Free a particular node
 * @node: Node to be freed
 */
void free_node(hash_node_t **node)
{
	hash_node_t *temp;

	while (*node != NULL)
	{
		temp = *node;
		*node = (*node)->next;
		free(temp->key);
		temp->value[0] = '\0';
		free(temp->value);
		free(temp);
	}
}
