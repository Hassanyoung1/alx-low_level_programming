#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to store in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* declare a pointer for new node and tranverse the list */
	dlistint_t *new_node, *current;

	/** allocate memory for new node **/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	/** Initialize the new node **/
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty the new node becomes the head */
	if (*head == NULL) 
	{
		new_node->prev = NULL;
		*head = new_node;
		return new_node;
	}

	/* Tranverse to the end of the list */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	/* update pointers to add to the new node at the end */

	current->next = new_node;
	new_node->prev = current;
	return new_node;
}
