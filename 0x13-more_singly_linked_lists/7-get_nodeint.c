#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Points to the head.
 * @index: index of the node starts at 0.
 *
 * Return: points to the nth node of the list, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *result_node;

	counter = 0;
	result_node = NULL;
	while (head != NULL)
	{
		if (counter == index)
		{
			result_node = head;
			break;
		}

		head = head->next;
		counter++;
	}

	return (result_node);
}
