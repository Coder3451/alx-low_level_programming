#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a listint_t list.
 * @head: a double pointer to the head.
 * @n: value to be stored
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_ptr;
	listint_t *current;

	new_ptr = malloc(sizeof(listint_t));
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	new_ptr->n = n;
	new_ptr->next = NULL;
	if (*head == NULL)
	{
		*head = new_ptr;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_ptr;
	}

	return (new_ptr);
}
