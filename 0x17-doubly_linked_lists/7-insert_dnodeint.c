#include "lists.h"

/**
 *insert_dnodeint_at_index - Inserts a new node at a given position in a
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the position where the new node should be added.
 * @n: Value to store in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;

	/* Handle insertion at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	/* Traverse to the desired position */
	current = *h;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	/* If idx is out of bounds, free the allocated memory */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Update pointers for the new node */
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
