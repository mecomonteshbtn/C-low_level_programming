#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listptr_t *ptr, *head2;
	listint_t *temp, *to;

	count = 0;
	head2 = NULL;
	temp = *h;
	while (temp != NULL)
	{
		ptr = head2;
		while (ptr != NULL)
		{
			if (ptr->ptr == temp)
			{
				free_listrange(h, to);
				free(to);
				free_listptr(head2);
				return (count);
			}
			ptr = ptr->next;
		}
		add_nodeptr(&head2, temp);
		to = temp;
		temp = temp->next;
		count++;
	}
	free_listrange(h, to);
	free(to);
	free_listptr(head2);
	return (count);
}

/**
 * free_listrange - frees a list given a range
 * @h: head to start freeing
 * @to: when to stop freeing
 */
void free_listrange(listint_t **h, listint_t *to)
{
	listint_t *temp;
	listint_t *temp2;

	temp2 = *h;
	while (temp2 != to)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*h = NULL;
}

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp2 = *head;
	while (temp2 != NULL && head != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*head = NULL;
}
