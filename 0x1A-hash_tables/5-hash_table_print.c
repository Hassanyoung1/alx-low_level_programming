#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first = 1; /* Flag to handle comma placement */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first)
				printf(", "); /* Add comma and space if not the first entry */
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			first = 0;
		}
	}
	printf("}\n");
}
