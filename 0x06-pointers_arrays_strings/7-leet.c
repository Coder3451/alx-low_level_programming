#include <stdlib.h>

/**
 * leet - Encodes a string into 1337
 * @str: character pointer
 *
 * Return: character
 */

char *leet(char *str)
{
	char *encoded = str;

	char *leetChars = "AaEeOoTtLl";
	char *leetReplacements = "4433007711";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (str[i] == leetChars[j])
			{
				encoded[i] = leetReplacements[j];
				break;
			}
		}
	}

	return (encoded);
}

