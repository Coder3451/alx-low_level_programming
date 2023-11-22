#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: Points to the head.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
