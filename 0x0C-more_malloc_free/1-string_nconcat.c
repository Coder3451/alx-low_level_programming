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
 * string_nconcat - Concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: the number of bytes of s2 to be concatenated.
 *
 * Return: Return pointer to a newly allocated space in memory.
 * If fails, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int s1_len, s2_len;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n < s2_len)
	{
		str = malloc((s1_len + n + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);

		_strcpy(str, s1);
		for (i = 0; i < n; i++)
			str[s1_len + i] = s2[i];

		str[s1_len + n] = '\0';
	}
	else
	{
		str = malloc((s1_len + s2_len + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);

		_strcpy(str, s1);
		_strcpy(str + _strlen(s1), s2);
	}

	return (str);
}
