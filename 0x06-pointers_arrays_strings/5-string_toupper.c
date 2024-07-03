#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Iterate over each character in the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}

	return (str);
}

