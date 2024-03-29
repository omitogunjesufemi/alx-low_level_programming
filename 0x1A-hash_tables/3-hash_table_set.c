#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table to add or update key/value to
 * @key: The Key, which cannot not be an empty string
 * @value: The value associated with the key, which must be duplicated.
 * Value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 *
 * Incase of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *dict, *new_node;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	if (ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	dict = ht->array[index];

	if (dict == NULL)     /*If no node is in the position*/
	{
		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);

		ht->array[index] = new_node;
		return (1);
	}
	else /*There is a node in the position*/
	{
		if (strcmp(dict->key, key) == 0)
		{
			free(dict->value);
			dict->value = strdup(value);
			return (1);
		}
		/*Handling collision - add new node at the head of list*/
		else
		{
			if (dict->next != NULL && strcmp((dict->next)->key, key) == 0)
			{
				free((dict->next)->value);
				(dict->next)->value = strdup(value);
				return (1);
			}
			new_node = create_node(key, value);
			if (new_node == NULL)
				return (0);
			new_node->next = dict;
			dict = new_node;
			ht->array[index] = dict;
			return (1);
		}
	}
	return (0);
}

/**
 * create_node - Initialises a new node with it key/value pair
 * @key: The key
 * @value: Value associated with the key
 * Return: hash_node_t node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
	{
		return (NULL);
	}
	strcpy(new_node->key, key);

        new_node->value = strdup(value);

	new_node->next = NULL;

	return (new_node);
}
