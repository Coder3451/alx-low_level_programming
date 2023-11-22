#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: Points to the head.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint(head->next);
	free(head);
}
