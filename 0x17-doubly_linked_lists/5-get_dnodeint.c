#include "lists.h"

/**
 * get_dnodeint_at_index - return node at given index
 *
 * @head: head of the list
 * @index: given index
 * Return: returns node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *handler;

	index += 1;

	if (head == NULL)
		return (NULL);

	handler = head;

	while (index != 1)
	{
		if (handler->next != NULL)
		{
			handler = handler->next;
			index--;
		}

		else
		{
			return (NULL);
		}
	}
	return (handler);
}
