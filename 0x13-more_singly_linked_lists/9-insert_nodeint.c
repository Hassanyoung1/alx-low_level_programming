#include "lists.h"
/**
 *insert_nodeint_at_index - that inserts a new node at a given position
 *@head: double pointer to the head of list
 *@idx: index of the list
 *@n: number of the list
 *Return: null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;

	listint_t *tmp, *add_new_nodes;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		tmp = *head;
		b = 0;
		while (b < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			b++;
		}
		if (tmp == NULL)
		{
			return (NULL);
		}
	}
	add_new_nodes = malloc(sizeof(listint_t));
	if (add_new_nodes == NULL)
	{
		add_new_nodes->n = n;
	}
	if (idx == 0)
	{
		add_new_nodes->next = *head;
		*head = add_new_nodes;
		return (add_new_nodes);
	}
	add_new_nodes->next = tmp->next;
	tmp->next = add_new_nodes;
	return (add_new_nodes);
}
