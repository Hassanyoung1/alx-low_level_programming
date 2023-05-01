#include "lists.h"
/**
 *listint_len - eturns the number of elements in a linked listint_t list
 *@h: node pointer
 *Return: Always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	for (; h != NULL ; element++)
	{
		h = h->next;
	}
	return (element);
}
