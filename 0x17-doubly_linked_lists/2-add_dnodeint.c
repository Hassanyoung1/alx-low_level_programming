#include "lists.h"

/**
 * add_dnodeint - Adds node at the beginning of a dlistint
 *
 * @head: pointer to the head of the list
 * @n:  put in the list
 * Return: pointer to new element, NULL if not successful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *handler, *new_node;

	handler = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (head == NULL || *head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		handler->prev = new_node;
		new_node->next = handler;
		*head = new_node;
		return (*head);
	}
}
