#include "lists.h"

/**
 * sum_dlistint - Sums all data in dlistint_t list
 *
 * @head: head of the list
 * Return: Sum of all data in list, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *handle;
	int add = 0;

	if (head == NULL)
		return (0);

	handle = head;
	while (handle->next != NULL)
	{
		add += handle->n;
		handle = handle->next;
	}
	return (add);
}
