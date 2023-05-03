#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lennt;
	int fr;
	listint_t *tmp;

	if (!h || !*h)
	{
		return (0);
	}
	for (lennt = 0; *h; lennt++)
	{
		fr = *h - (*h)->next;
		if (fr > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		else
		{
			free(*h);
			*h = NULL;
			lennt++;
			break;
		}
	}

	*h = NULL;

	return (lennt);
}

