#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash Table
 * @key: The key to be looked for
 * Return: value associated with the element or NULL if key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_gotten, *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return NULL;

	index = key_index((unsigned char *)key, ht->size);
	node_gotten = ht->array[index];

	if (node_gotten == NULL)
		return NULL;

	if (strcmp(node_gotten->key, key) == 0)
		return (node_gotten->value);

	temp = node_gotten;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
