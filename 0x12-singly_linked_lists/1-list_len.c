#include "lists.h"
/**
 *list_len - function that returns the number of
 *elements in a linked list_t list.
 *@h: list name
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	for (; h; num++)
	{
		h = h->next;
	}
	return (num);
}
