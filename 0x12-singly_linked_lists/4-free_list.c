#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{

	while (head)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
