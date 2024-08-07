#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginnning of a  list_t list.
 * @head: Points to a pointer to the head.
 * @str: The string to be duplicated
 *
 * Return: the address of the new elment, of NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	int length;
	char *_dupstr;

	length = 0;
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

	while (str[length])
	{
		length++;
	}
	new_element->str = _dupstr;
	new_element->len = length;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}

