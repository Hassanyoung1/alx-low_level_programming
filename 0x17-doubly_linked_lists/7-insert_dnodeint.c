#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* Special case: inserting at index 0 */
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	/* Traverse to the node at the position before the insertion point */
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	/* If the current node is NULL, the index is out of range */
	if (current == NULL)
		return (NULL);

	/* Create a new node and link it to the list */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
