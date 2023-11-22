#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: points to the head of the listint_t.
 *
 * Return: points to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNodes;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}

	nextNodes = reverse_listint(&((*head)->next));
	(*head)->next->next = *head;
	(*head)->next = NULL;

	return (nextNodes);
}
