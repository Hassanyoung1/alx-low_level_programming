#include "hash_tables.h"
/**
 * hash_table_create - Function to create the hash table
 * @size: the size of the hash table
 * Return: pointer to the newly created hash table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	/** Allocate memory top the hash table**/
	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	/** Declare the  Linglist of an hashtable **/
	hash_table->array = calloc(size, sizeof(hash_node_t *));	
	if (hash_table->array == NULL)
	{
		/**free(hash_table);**/
		return (NULL);
	}
	/** Loop through the table **/
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
