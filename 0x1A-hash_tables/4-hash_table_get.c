#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in the hash table.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 *
 * Return: The value associated with the element, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return current_node->value;
		current_node = current_node->next;
	}

	return NULL; /* Key not found */
}
