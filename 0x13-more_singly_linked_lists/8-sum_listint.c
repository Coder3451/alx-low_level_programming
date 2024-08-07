#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list.
 * @head: points to the head.
 *
 * Return: sum of all the data, ot 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}

	return (head->n + sum_listint(head->next));
}
