#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - function that frees a listint_t linked list.
 * @h: points to a pointer to the head.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter;
	listint_t *current;
	listint_t *next;

	counter = 0;
	current = *h;
	while (*current != NULL)
	{
		counter++;

		if (current->next >= current)
		{
			*h = NULL;
			break;
		}

		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (counter);
}
