#include "hash_tables.h"

/**
 * key_index - returns the index of a key in the hash table array
 * @key: the key to be hashed
 * @size: the size of the hash table array
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Use the hash_djb2 function to compute the hash value */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the remainder of hash_value and size */
	return (hash_value % size);
}
