#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t linked list.
 * @head: points to the head.
 * @index: starts at 0.
 *
 * Return:  1 if deletion succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return -1;

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
