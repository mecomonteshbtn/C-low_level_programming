#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return;

	temp2 = *head;
	while (temp2 && *head)
	{
		temp1 = temp2;
		temp2 = temp2->next;
		free(temp1);
	}
	*head = NULL;
}
