#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlistint list
 *
 * @h: head of the list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t counter = 0;

	if (h == NULL)
		return (0);


	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
