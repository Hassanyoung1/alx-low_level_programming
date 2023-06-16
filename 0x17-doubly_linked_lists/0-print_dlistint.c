#include "list.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list's list
 *
 * @h: Head of the lis
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
