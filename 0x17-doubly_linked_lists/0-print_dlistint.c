#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list's list
 *
 * @h: Head of the lis
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *hold;
	size_t count = 0;

	if (h == NULL)
		return (count);

	hold = h;
	while (hold != NULL)
	{
		count++;
		printf("%d\n", hold->n);
		hold = hold->next;
	}

	return (count);
}
