/**
 * shash_table_create - Created a sorted hash table
 * @size: Size of the hash table
 * Return: Hash table
 */
shash_table_t *shash_table_create(unsigned long int size);

/**
 * shash_table_set - Insert to an hash table
 * @key: Key
 * @value: Value associated to key
 * Return: 1 if successful, and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_get - Return value associated to a key
 * @ht: Hash table
 * @key: Key
 * Return: value associated to key
 */
char *shash_table_get(const shash_table_t *ht, const char *key);