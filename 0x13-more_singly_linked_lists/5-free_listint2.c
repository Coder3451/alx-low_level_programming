#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: double pointer to the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
