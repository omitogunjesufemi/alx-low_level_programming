#include "hash_tables.h"

/**
 * main - Entry point of the program
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int i;
	hash_node_t *node;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "c", "fun");

	/*Collision 1*/
	hash_table_set(ht, "hetairas", "Collision-1");
	hash_table_set(ht, "mentioner", "Collision-1");

	/*Collision 2*/
	hash_table_set(ht, "heliotropes", "Collision-2");
	hash_table_set(ht, "neurospora", "Collision-2");

	i = key_index((const unsigned char *)"betty", ht->size);
	node = ht->array[i];
	printf("Index: %ld  Key: %s  Value: %s\n",
	       i, node->key, node->value);


	i = key_index((const unsigned char *)"c", ht->size);
	node = ht->array[i];
	printf("Index: %ld  Key: %s  Value: %s\n",
	       i, node->key, node->value);


	/*Collision Print*/
	i = key_index((const unsigned char *)"mentioner", ht->size);
	node = ht->array[i];
	printf("Index: %ld  Key: %s  Value: %s\n",
	       i, node->key, node->value);
	return (EXIT_SUCCESS);
}
