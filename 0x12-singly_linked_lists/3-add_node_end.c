#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - A funtion that adds a new node at the end of a  list_t list.
 * @head: Points to a pointer to the head.
 * @str: The string to be duplicated
 *
 * Return: the address of the new elment, of NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element, *current_node;
	char *_dupstr;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	_dupstr = strdup(str);
	if (_dupstr == NULL)
	{
		free(new_element);
		return (NULL);
	}

	new_element->str = _dupstr;
	new_element->len = strlen(str);
	new_element->next = NULL;

	if (*head == NULL)
		*head = new_element;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_element;
	}

	return (new_element);
}
