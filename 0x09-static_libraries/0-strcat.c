#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first character
 * @src: second character
 *
 * Return: returns character pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the source string to the destination string */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}

	/* Add the terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}

