#include "lists.h"
/**
 *print_dlistint - function to print all element of dlist
 *@h: Pointer to the head of list
 *Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
