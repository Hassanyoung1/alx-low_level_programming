#include "lists.h"

/**
 *sum_listint - function that returns the sum of all the data (n)
 *@head: head of the list
 *Return: 0
 */

int sum_listint(listint_t *head)
{
	int add;

	for (add = 0; head != NULL; )
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
