#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;
	dlistint_t *node_to_delete; /* Declare the variable at the beginning */

	if (*head == NULL) /* Check if the list is empty */
		return (-1);

	/* Special case: Delete the head node */
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node just before the desired index */
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	/* If index is out of bounds or current node is NULL, return -1 */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Update pointers to skip the node to be deleted  */
	node_to_delete = current->next; /* Assign the value here */
	current->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current;
	free(node_to_delete);

	return (1);
}
