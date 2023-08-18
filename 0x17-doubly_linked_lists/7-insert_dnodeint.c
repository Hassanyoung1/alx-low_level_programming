#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the position where the new node should be added.
 * @n: Value to store in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (idx == 0)
        return (insert_at_beginning(h, n));

    dlistint_t *current = *h;
    unsigned int count;

    for (count = 0; current != NULL && count < idx - 1; count++)
    {
        current = current->next;
    }

    if (current == NULL)
        return (NULL);

    return (insert_at_index(current, n));
}
