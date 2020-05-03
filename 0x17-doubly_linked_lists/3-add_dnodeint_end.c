#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - A function that adds a node to the end of list.
 * @head: The double pointer to the head.
 * @n: The data to add to new node.
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		new_node->prev = temp;
		temp->next = new_node;

		return (new_node);
	}
	return (NULL);
}
