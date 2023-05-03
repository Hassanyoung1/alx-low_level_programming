#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slo = head;
	listint_t *quick = head;

	if (!head)
	{
		return (NULL);
	}
	for ( ; slo && quick && quick->next; )
	{
		quick = quick->next->next;
		slo = slo->next;
		if (quick == slo)
		{
			for  (slo = head; slow != quick; )
			{
				slo = slo->next;
				quick = quick->next;
			}
			return (quick);
		}
	}
	return (NULL);
}
