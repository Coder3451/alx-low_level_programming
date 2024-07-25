#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0), to the buffer pointed to by dest
 *  @dest: first character pointer
 *  @src: second character pointer
 *
 *  Return: the character pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}

