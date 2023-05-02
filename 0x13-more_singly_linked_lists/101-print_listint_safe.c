#include "lists.h"
/**
 * looped_listint_len - Counts the number nodes
 *
 * @head: A pointer to the head of the listint_t
 *
 *Return: If the list is not looped 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ijapa, *hre;
	size_t num_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ijapa = head->next;
	hre = (head->next)->next;

	while (hre)
	{
		if (ijapa == hre)
		{
			for (ijapa = head; ijapa != hre; num_nodes++)
			{
				ijapa = ijapa->next;
				hre = hre->next;
			}
			for (ijapa = ijapa->next; ijapa != hre; num_nodes++)
			{
				ijapa  = ijapa->next;
			}
			return (num_nodes);
		}

		ijapa = ijapa->next;
		hre = (hre->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t new_nodes, idx = 0;

	new_nodes = looped_listint_len(head);

	if (new_nodes == 0)
	{
		for (; head != NULL; new_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		while (idx < new_nodes)
		{
			idx++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (new_nodes);
}
