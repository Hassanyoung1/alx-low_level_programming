#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node, *temp_node;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		if (ht->array[index])
		{
			current_node = ht->array[index];
			while (current_node)
			{
				temp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp_node;
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
