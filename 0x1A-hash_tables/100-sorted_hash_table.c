#include "hash_tables.h"

/**
 * shash_table_create - Created a sorted hash table
 * @size: Size of the hash table
 * Return: Hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->shead = malloc(sizeof(shash_node_t));
	if (table->shead == NULL)
	{
		for (i = 0; i < size; i++)
		{
			free(table->array[i]);
		}
		free(table);
		return (NULL);
	}
	table->stail = malloc(sizeof(shash_node_t));
	if (table->stail == NULL)
	{
		for (i = 0; i < size; i++)
		{
			free(table->array[i]);
		}
		free(table->shead);
		free(table);
		return (NULL);
	}
	return (table);
}


/**
 * shash_table_set - Insert to a sorted hash table
 * @ht: Sorted Hash Table
 * @key: Key
 * @value: Value associated to key
 * Return: 1 if successful, and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *dict;

	index = key_index((unsigned char *)key, ht->size);
	if (ht == NULL || strcmp(key, "") == 0 || key == NULL)
		return (0);

	dict = ht->array[index];
	if (dict == NULL) /*No collision*/
	{
		node = create_snode(key, value);
		if (node == NULL)
			return (0);
		ht->array[index] = node;
		return (1);
	}
	else /*There is collision*/
	{
		if (strcmp(dict->key, key) == 0) /*Update node*/
		{
			free(dict->value);
			dict->value = strdup(value);
			return (1);
		}
		else
		{
			node = create_snode(key, value);
			if (node == NULL)
				return (0);
			node->next = dict;
			dict = node;
			ht->array[index] = dict;
			return (1);
		}
	}
	return (0);
}

/**
 * create_snode - Creates a sorted hash node
 * @key: Key
 * @value: Value associated to key
 * Return: Node
 */
shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *snode;

	snode = malloc(sizeof(shash_node_t));
	if (snode == NULL)
		return (NULL);

	snode->key = strdup(key);
	snode->value = strdup(value);
	snode->next = NULL;
	snode->sprev = NULL;
	snode->snext = NULL;

	return (snode);
}

/**
 * shash_table_get - Return value associated to a key
 * @ht: Sorted Hash table
 * @key: Key
 * Return: value associated to key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *dict, *temp;

	index = key_index((unsigned char *)key, ht->size);
	if (ht == NULL)
		return (NULL);

	dict = ht->array[index];
	if (dict == NULL)
		return (NULL);

	if (strcmp(dict->key, key) == 0)
		return (dict->value);

	temp = dict;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the hash table using the sorted linked
 * list
 * @ht: Sorted Hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i, count;
	shash_node_t *node, *sprev, *snext;

	count = 0;
	printf("{");
	sprev = NULL;
	snext = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			node->sprev = sprev;
			sprev = node;
			if (count != 0)
				printf(", ");
			count++;
			printf("'%s': '%s'", node->key, node->value);
		}
	}
	printf("}\n");

}

/**
 * shash_table_print_rev - Print the hash table using the sorted linked
 * list in reverse order
 * @ht: Sorted Hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i, count;
	shash_node_t *node;

	count = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while(node != NULL)
			{
				if (count != 0)
					printf(", ");
				count++;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: Sorted Hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			free_snode(&node);
		}

	}
	free(ht->array);
	free(ht->shead);
	free(ht->stail);
	free(ht);
}


/**
 * free_snode - Free a particular sorted node
 * @node: Node to be freed
 */
void free_snode(shash_node_t **node)
{
	shash_node_t *temp;

	while (*node != NULL)
	{
		temp = *node;
		*node = (*node)->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
