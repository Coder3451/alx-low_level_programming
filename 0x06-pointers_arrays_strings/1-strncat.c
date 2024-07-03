#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest: first character pointer
 * @src: second character pointer
 * @n: integer variable
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* find the end of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* append n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	/* null-terminate dest */
	dest[dest_len + i] = '\0';
	return (dest);
}

