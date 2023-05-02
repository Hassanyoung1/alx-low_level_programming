#include "lists.h"

/**
 *delete_nodeint_at_index -  deletes the node at index
 *@head: double pointer head of the list
 *@index: nodes index
 *Return: pointer to index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	a = 0;
	while (a < index - 1)
	{
		a++;
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);
}
