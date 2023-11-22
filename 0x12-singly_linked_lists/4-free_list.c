#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list.
 * @head: Points to the head.
 */
void free_list(list_t *head)
{
	list_t *currentValue;

	while (head != NULL)
	{
		currentValue = head;
		head = head->next;
		free(currentValue->str);
		currentValue->next = NULL;
		free(currentValue);
	}
}
