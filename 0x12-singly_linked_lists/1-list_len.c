#include <stdio.h>
#include "lists.h"

/**
 * list_len - A functio thst returns the number of a elements in a list_t list.
 * @h: This points to the head
 *
 * Return: The number of elements in a linked lits_t list.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
