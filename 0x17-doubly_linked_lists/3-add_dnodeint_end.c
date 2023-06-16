#include "lists.h"

/**
 * add_dnodeint_end - Add node at end of dlistint list
 *
 * @head: pointer to the head of the list
 * @n: Data to insert in the list
 * Return: pointer new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *handler, *new_nodes;

	new_nodes = malloc(sizeof(dlistint_t));
	if (new_nodes == NULL)
		return (NULL);

	handler = *head;
	new_nodes->n = n;
	new_nodes->next = NULL;
	new_nodes->prev = NULL;
	if (head == NULL || *head == NULL)
	{
		*head = new_nodes;
		return (*head);
	}

	else
	{
		while (handler != NULL)
			handler = handler->next;

		handler->next = new_nodes;
		new_nodes->prev = handler;
		return (handler);
	}
	return (*head);
}
