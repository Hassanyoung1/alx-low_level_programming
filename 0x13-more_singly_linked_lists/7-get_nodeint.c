#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node
 *@head: head of the list
 *@index: unsigned
 *Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a < index)
	{
		head = head->next;
		a++;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
