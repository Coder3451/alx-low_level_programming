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
