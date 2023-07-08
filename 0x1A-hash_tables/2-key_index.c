#include "hash_tables.h"
/**
 *key_index - function that gives you the index of a key.
 *@key: the key to be created
 *@size: the size of the hash table
 *Return: the index at which the key pair should be stored in the array of
 *        the hash table
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;
	int sum_ascii;

	sum_ascii = hash_djb2(key);

	if (sum_ascii == 0 || size == 0)
	{
		return (0);
	}
	hash_index = sum_ascii % size;
	return (hash_index);
}
