#include "lists.h"

/**
 *add_node - function that adds a new node at the beginning of a list_t list.
 *@head: the head list
 *@str:name of list
 *Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *New_node;

	New_node = malloc(sizeof(list_t));
	if (New_node == NULL)
	{
		return (NULL);
	}
	New_node->str = strdup(str);

	New_node->len = strlen(str);
	New_node->next = *head;
	*head = New_node;

	return (New_node);
}
