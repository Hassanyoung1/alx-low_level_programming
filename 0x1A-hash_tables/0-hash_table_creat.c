#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the table to be created
 * Return: Pointer to newly created hash table, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
