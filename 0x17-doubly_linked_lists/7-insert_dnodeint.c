#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index
 *
 * @h: pointer to the head of the list
 * @idx: the given index
 * @n: Data to put in list
 * Return: Address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *holder, *new_node;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	holder = *h;
	while (idx > 1)
	{
		if (holder == NULL)
		{
			free(new_node);
			return (NULL);
		}
		holder = holder->next;
		idx--;
	}
	new_node->prev = holder;
	new_node->next = holder->next;
	if (holder->next != NULL)
		holder->next->prev = new_node;
	holder->next = new_node;

	return (new_node);
}
