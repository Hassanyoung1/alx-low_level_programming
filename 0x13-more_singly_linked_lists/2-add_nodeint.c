#include "lists.h"
/**
 *add_nodeint - t adds a new node at the beginning of a listint_t
 *@head: head of double p[ointer
 *@n: add to the list
 *Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pter;

	if (head == NULL)
	{
		return  (NULL);
	}
	pter = malloc(sizeof(listint_t));
	if (pter == NULL)
	{
		return (NULL);
	}
	pter->n = n;
	pter->next =  *head;
	*head = pter;
	return (pter);
}
