#include "lists.h"
/**
 *pop_listint - deletes the head node
 *@head: head of the list
 *Return:0
 */
int pop_listint(listint_t **head)
{
	listint_t *begin;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	begin = *head;
	*head = begin->next;
	n = begin->n;
	free(begin);
	return (n);
}
