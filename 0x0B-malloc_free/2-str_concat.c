#include "main.h"

/**
 * _strlen - find length of a string
 * @s: the string
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: first character pointer
 * @src: second character pointer
 *
 * Return: the character pointer to dest
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

/**
 * str_concat - Concatenates two strings.
 * @s1: the first content
 * @s2: the second content
 *
 * Return: On success return a pointer to a newly allocated space in memory.
 * On failure, return NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	ssize_t s1_length, s2_length;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	s1_length = _strlen(s1);
	s2_length = _strlen(s2);

	str = malloc((s1_length + s2_length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	_strcpy(str, s1);
	_strcpy(str + _strlen(s1), s2);

	return (str);
}
