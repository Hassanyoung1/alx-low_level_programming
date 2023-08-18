#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	/* Initialize the sum variable */
	int sum = 0;
	/* Start at the head of the list */
	dlistint_t *current = head;

	/* Traverse the list and calculate the sum */
	while (current != NULL)
	{
	/* Add the current node's data to the sum */
	sum += current->n;

	/*Move to the next node*/
	current = current->next;
	}
	/* Return the calculated sum */
	return (sum);

	if (head == NULL)
	{
		return (0);
	}
}
