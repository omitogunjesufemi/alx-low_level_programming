#ifndef _HASH_TABLES_
#define _HASH_TABLES_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a Hash Table
 * @size: This is the size of the Hash Table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm
 * @str: The string to hash
 * Return: hash values
 */
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - Creates index of a key
 * @key: Key of the item
 * @size: Size of the array of the hash table
 * This function uses the hash_djb2 function
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

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
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * create_node - Initialises a new node with it key/value pair
 * @key: The key
 * @value: Value associated with the key
 * Return: hash_node_t node
 */
hash_node_t *create_node(const char *key, const char *value);

#endif /*_HASH_TABLES_*/
