#include "lists.h"
/**
 *add_dnodeint - function that adds a new node at the beginning
 *@head: Pointer to the head of the list
 *@n: number of list
 *Return: Null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/** Declare a pointer for a new node*/
	dlistint_t *new_node;

	/**Allocate memory for the new node **/
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Initialize new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* update new node */
	new_node->next  = *head;
	if  (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* upade the head pointer*/
	*head = new_node;
	return (new_node);
}
