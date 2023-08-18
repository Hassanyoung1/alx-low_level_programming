#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0; // Fixed data type of count
    dlistint_t *current = head;

    while (current != NULL)
    {
        if (count == index)
        {
            return current;
        }
        current = current->next;
        count++;
    }
    
    return (NULL);
}
