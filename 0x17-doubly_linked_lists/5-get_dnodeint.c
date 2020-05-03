#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets a node at index
 * @head: The pointer to head of list to look through
 * @index: The index of node to find
 * Return: A pointer to node if found, or NULL in otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
