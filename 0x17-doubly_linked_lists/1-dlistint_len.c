#include "lists.h"
/**
 *dlistint_len - function that returns thie number of elements in a dlist
 *@h: Pointer to the of the list
 *Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != 0)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);

}
