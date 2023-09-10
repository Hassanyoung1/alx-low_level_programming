#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 * @size: the size of the hash table
 * Return: This is to return table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	size_t i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
