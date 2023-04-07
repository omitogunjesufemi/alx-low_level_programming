#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s;
	unsigned long int hash_table_array_size;

	hash_table_array_size = 1024;

	s = "c";
	/*printf("%lu\n", hash_djb2((unsigned char *)s));*/
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));

	s = "python";
	/*printf("%lu\n", hash_djb2((unsigned char *)s));*/
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));

	s = "Bob";
	/*printf("%lu\n", hash_djb2((unsigned char *)s));*/
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));

	s = "N";
	/*printf("%lu\n", hash_djb2((unsigned char *)s));*/
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));

	s = "Asterix";
	/*printf("%lu\n", hash_djb2((unsigned char *)s));*/
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));

	s = "Betty";
	/*printf("%lu\n", hash_djb2((unsigned char *)s));*/
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));

	s = "98";
	/*printf("%lu\n", hash_djb2((unsigned char *)s));*/
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
	return (EXIT_SUCCESS);
}
