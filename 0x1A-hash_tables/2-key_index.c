#include "hash_tables.h"

/**
 * key_index - Creates index of a key
 * @key: Key of the item
 * @size: Size of the array of the hash table
 * This function uses the hash_djb2 function
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
