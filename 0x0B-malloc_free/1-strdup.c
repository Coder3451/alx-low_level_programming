#include "main.h"

/**
 * _strlen - calculate the length of the string
 * @str: the string
 *
 * Return: Return the length of the string
 */
int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * _strdup - Duplicates string
 * @str: the string to be duplicated
 *
 * Return: On success, return a pointer to the duplicated string.
 * Returns NULL if str = NULL or if insufficient memroy was available.
 */
char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	arr = malloc((_strlen(str) + 1) * sizeof(char));
	i = 0;

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < (_strlen(str) + 1))
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
