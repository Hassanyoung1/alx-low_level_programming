#include "hash_tables.h"

/**
 * hash_table_print - Prints all keys and values in a hash table.
 * @ht: The hash table to print from.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int index = 0;
	int not_first = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index])
		{
			current_node = ht->array[index];
			while (current_node)
			{
				if (not_first)
					printf(", ");
				else
					not_first = 1;
				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
			}
		}
		index++;
	}
	printf("}\n");
}
