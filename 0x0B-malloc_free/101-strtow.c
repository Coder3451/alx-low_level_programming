#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: the string to be splitted.
 *
 * Return: Return a pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i;
	char **ptr, **null_count;
	char null;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	i = 0;
	null = '\0';
	**null_count = &null;
	ptr = malloc(sizeof(char));
	null_count = malloc(sizeof(char));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			_strcpy(str, ptr);
		}
		else
		{
			_strcpy(str, null_count);
		}
		i++;
	}

	str[i] = NULL;

	return (ptr);
}
