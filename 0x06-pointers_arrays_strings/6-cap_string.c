#include "main.h"

/**
 * cap_string - Capitalixes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Set the flag to indicate that the next character should be capitalized */
	int capitalizeNext = 1;

	/* Iterate over each character in the string */
	while (str[i] != '\0')
	{
		/* Check if the current character is a word separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			/* Set the flag to capitalize the next character */
			capitalizeNext = 1;
		}
		/* Check if the current character is a lowercase letter */
		else if (str[i] >= 'a' && str[i] <= 'z' && capitalizeNext)
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - 'a' + 'A';
			capitalizeNext = 0; /* Reset the flag */
		}
		else
		{
			capitalizeNext = 0; /* Reset the flag */
		}

		i++;
	}

	return (str);
}

