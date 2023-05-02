#include "lists.h"
/**
 *add_nodeint_end - function that add node at the end of a list
 *@head: double pointer head
 *@n: point to the head
 *Return: NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
	{
		return (NULL);
	}
	add_new->n = n;
	add_new->next = NULL;

	if (*head == NULL)
	{
		*head = add_new;
		return (add_new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = *head;
	}
	tmp->next = add_new;
	return (add_new);
}
