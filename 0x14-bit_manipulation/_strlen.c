#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string
 *
 * Return: return the length.
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
