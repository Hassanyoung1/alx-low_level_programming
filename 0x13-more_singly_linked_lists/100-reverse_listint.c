#include "lists.h"

/**
 *reverse_listint -  reverses a listint_t
 *@head: head of list double pointer
 *
 *Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev;
	listint_t *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	for (rev = 0; *head != NULL; )
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;
	return (*head);
}
