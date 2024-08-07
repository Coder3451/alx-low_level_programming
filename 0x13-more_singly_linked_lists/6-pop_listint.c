#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Funtion that deletes the head node of a listint_t linked list.
 * @head: double pointer to the head.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	data = 0;
	if (head != NULL && *head != NULL)
	{
		current = *head;
		data = current->n;
		*head = current->next;
		free(current);
	}

	return (data);
}
